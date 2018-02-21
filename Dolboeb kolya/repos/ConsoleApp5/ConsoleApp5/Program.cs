using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            string a_s;
            int m = 4, n = 3;
            int kol = 0;
            Console.WriteLine("Vvedite peremennie");
            a_s = Console.ReadLine();
            Console.WriteLine("Vvedite kol-vo peremennih");
            m = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Vvedite glubinu");
            n = Convert.ToInt32(Console.ReadLine());
            FileStream file228 = new FileStream("C:\\Users\\HRYAK\\Desktop\\test\\test_visualki\\test.txt",FileMode.Create);
            StreamWriter writer = new StreamWriter(file228);
            for (int i = 0; i < Math.Pow(m, n); i++)
            {
                string s = "";
                int ii = i;
                for (int j = 0; j < n; j++)
                {
                    s = a_s[ii % m] + s;
                    ii /= m;
                }
                kol++;
                if (kol%1000000==0)
                {
                    Console.Write(kol);
                    Console.WriteLine(" - повторов");
                }
                writer.WriteLine(s);
            }
            Console.WriteLine("Done!");
            Console.WriteLine("---");
            Console.Write(kol);
            Console.Write(" - комбинаций");
            Console.ReadKey();
            writer.Close();
        }
    }
}