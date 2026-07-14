```cpp
#include <cmath>
#include <algorithm>
#include <limits>
#include <type_traits> //REM: Required for std::is_floating_point

//REM: Your original precise equality logic
template <typename T, typename = typename std::enable_if<std::is_floating_point<T>::value>::type>
[[nodiscard]] bool are_nearly_equal_floating(T const a, T const b, T const epsilon = std::numeric_limits<T>::epsilon()) {
    T const diff = std::abs(a - b);
    if (diff <= epsilon) {
        return true;
    }
    return diff <= (epsilon * std::max(std::abs(a), std::abs(b)));
}

//REM: Java-style compare method: returns -1, 0, or 1
template <typename T, typename = typename std::enable_if<std::is_floating_point<T>::value>::type>
[[nodiscard]] int compare_floating(T const a, T const b, T const epsilon = std::numeric_limits<T>::epsilon()) {
    //REM: 1. Check for precise equality first using your logic
    if (are_nearly_equal(a, b, epsilon)) {
        return 0;
    }

    if (a < b) {
        return -1; 
    }

    return 1;
}

```