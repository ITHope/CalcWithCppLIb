// CalcWithCppLIb.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "CalcCppLib.h"
#include <stdexcept>

using namespace std;

namespace CalcCppLib
{
	extern "C" {
		__declspec(dllexport) int CalcCppLib::Calc(int num1, int num2, char op)
		{
			int res;

			if (op == '+')
			{
				res = num1 + num2;
			}
			else if (op == '-')
			{
				res = num1 - num2;
			}
			else if (op == '*')
			{
				res = num1 * num2;
			}
			else if (op == '/')
			{
				res = num1 / num2;
			}
			return res;
		}
	}
}