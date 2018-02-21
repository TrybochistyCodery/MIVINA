using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp1
{
    class Program
    {
        public static void sort(char[] vivstr,int d,char[] elements)
        {
            int k = 0;
            for (int i = 0; i <= d - 1; i++)
            {
                vivstr[i] = elements[k];
            }
            for (int z = 0; z <= d - 1; z++)
            {
                vivstr[0] = elements[z]; //ispravit' nomer
                for (int q = 0; q <= d - 1; q++)
                {
                    for (int f = 0; f <= d - 1; f++)
                    {
                        vivstr[1] = elements[q]; //ispravit' nomer
                    }
                    for (int c = 0; c <= d - 1; c++)
                    {
                        for (int i = 0; i <= d - 1; i++)
                        {
                            vivstr[2] = elements[c]; //ispravit' nomer
                            Console.Write(vivstr[i]);
                        }
                        Console.WriteLine("");
                    }
                }
            }
        }
        static void Main(string[] args)
        {
            string vodstr;
            char[] vivstr = new char[25];
            char[] elements = new char[25];
            int d = 0;
            int kol = 0;
           // int razmer;
            Console.WriteLine("Vvedite ispolzuemie peremennie");
            vodstr = Console.ReadLine();
            Console.WriteLine("----");
            for (int i = 0; i < vodstr.Length; i++)
            {
                elements[i] = vodstr[i];
                Console.Write(elements[i]);
                d++;
            }
            Console.WriteLine("");
            Console.WriteLine("---");
            sort(vivstr, d, elements);
            //Console.WriteLine("");
            //Console.WriteLine("----");
           // Console.WriteLine(kol);
            Console.ReadKey();
        }
    }
}
// NOVAYA VERSIA ------------------------------
/*             int k = 0;
            for (int i = 0; i <= d - 1; i++)
            {
                vivstr[i] = elements[k];
            }
                for (int z = 0; z <= d - 1; z++)
                {
                    vivstr[0] = elements[z]; //ispravit' nomer
                    for (int q = 0; q <= d - 1; q++)
                    {
                        for (int f = 0; f <= d - 1; f++)
                        {
                            vivstr[1] = elements[q]; //ispravit' nomer
                        }
                        for (int W = 0; W <= d - 1; W++)
                        {
                            for (int i = 0; i <= d - 1; i++)
                            {
                                vivstr[2] = elements[W];  //ispravit' nomer
                                Console.Write(vivstr[i]);
                            }
                        kol++;
                        Console.WriteLine("");
                        }
                    }
                } */
// STARAYA VERSIA -----------------------------
/* for (int j = 0; j <= d - 1; j++)
 {
     for (int i = 0; i <= d - 1; i++)
     {
         vivstr[d - 3] = elements[j];
     }
     for (int q = 0; q <= d - 1; q++)
     {
         for (int i = 0; i <= d - 1; i++)
         {
             vivstr[d - 2] = elements[q];
         }
         for (int W = 0; W <= d - 1; W++)
         {
             for (int i = 0; i <= d - 1; i++)
             {
                 vivstr[d - 1] = elements[W];
                 Console.Write(vivstr[i]);
                 kol++;
             }
             Console.WriteLine("");
         }
     }
     Console.WriteLine("");
 } */
