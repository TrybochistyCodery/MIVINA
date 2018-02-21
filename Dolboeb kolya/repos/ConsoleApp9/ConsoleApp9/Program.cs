using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp9
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] x = new int[11];
            
            int min, max;
            min = 0;
            max = 0;
            for (int i=0;i<10;i++)
            {
                x[i] = Convert.ToInt32(Console.ReadLine());
            }
            for (int i=0;i<11; i++)
            {
                if (x[min] > x[i])
                {
                    min = i;
                }
                if (x[i]>x[max])
                {
                    max = i;
                }
            }
            Console.WriteLine(min);
            Console.WriteLine(max);
            Console.ReadKey();
        }
    }
}
