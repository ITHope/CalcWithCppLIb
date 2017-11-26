#ifdef CALCCPPLIB_EXPORTS
#define CALCCPPLIB_API __declspec(dllexport) 
#else
#define CALCCPPLIB_API __declspec(dllimport) 
#endif
