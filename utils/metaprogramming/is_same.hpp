#include <type_traits>


namespace mcu { /* mcu = my_cpp_utils */

/*
    Metaprogramming constexp bool fuction, which return if types T1, ..., TN are the same.
    Uses 'std::is_same'.
    Example of calling: 
        mcu::is_same(43, -1, "hello")  returns false.
*/
template <typename T1, typename ... TN>
constexpr bool is_same(T1, TN ...)
{
    return (std::is_same<T1, TN>::value && ...);
}


} /* 'mcu' namespace */
