using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] value = new int[5,2];
            int rows = value.GetUpperBound(0) + 1;
            int colomn = value.Length / rows;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < colomn; j++)
                {
                    value[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.WriteLine("--------------------");   // value[i,i] = Convert.ToInt32(Console.ReadLine()); 
            for (int i=0;i<rows;i++)
            {
                for (int j=0;j<colomn;j++)
                {
                    Console.WriteLine(value[i, j]);
                }
            }
            Console.ReadKey();
        }
    }
}
