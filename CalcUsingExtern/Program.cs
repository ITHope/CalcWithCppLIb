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
        [DllImport("CalcCppLib.dll")]
        public static extern int CalcCppLib(int num1, int num2, char op);

        static void Main(string[] args)
        {
            Console.WriteLine(CalcCppLib(5, 7, '+'));
        }
    }
}
