using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace CalcUsingExtern
{
    class Program
    {
        [DllImport("CalcCppLib.dll", EntryPoint = "?Calc@CalcCppLib@1@SAHHHD@Z")]
        public static extern int Calc(int num1, int num2, char op);

        static void Main(string[] args)
        {
            Console.WriteLine(Calc(5, 7, '+'));
        }
    }
}
