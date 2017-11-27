#ifdef CALCCPPLIB_EXPORTS
#define CALCCPPLIB_API __declspec(dllexport) 
#else
#define CALCCPPLIB_API __declspec(dllimport) 
#endif

namespace CalcCppLib
{
	class CalcCppLib
	{
	public:
		static __declspec(dllexport) int Calc(int num1, int num2, char op);
	};
}