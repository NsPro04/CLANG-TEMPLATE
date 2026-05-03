/*
/// .h:
#ifdef XXXX_EXPORTS
#  define XXXX_API __declspec(dllexport)
#else // !XXXX_EXPORT
#  define XXXX_API __declspec(dllimport)
#  ifndef XXXX_NO_AUTO_LINK
#    pragma comment(lib, "xxxx.lib")
#  endif // XXXX_NO_AUTO_LINK
#endif // XXXX_EXPORT

namespace xxxx {
inline namespace v1 {
XXXX_API ...;
} // namespace v1
} // namespace xxxx
/// :.h

#define XXXX_EXPORTS
#include <xxxx/xxxx.h>
*/