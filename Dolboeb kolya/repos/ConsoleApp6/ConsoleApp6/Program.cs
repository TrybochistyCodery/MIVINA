using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = new int[100];
            int i, k, pov;
            Random rand = new Random();
            Console.WriteLine("vvedite kol-vo znacheniy");
            k = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i <= k; i++)
            {
                numbers[i] = rand.Next(100);
            }
            pov = bogosort(numbers, k);
            Console.Write("dlya sortirovki ponadobilos - ");
            Console.Write(pov);
            Console.Write(" povtorov; ");
            for (i = 0; i < k; i++)
            {
                Console.Write(numbers[i]);
                Console.Write(" ");
            }
            Console.ReadKey();
        }
        public static int bogosort(int[] a, int n)
        {
            int p;
            p = 0;
            do
            {
                p++;
                shuffle(a, n);
                if (p % 1000000 == 0)
                {
                    Console.Write(p);
                    Console.Write("- povtorov");
                    Console.WriteLine("");
                }
            } while (!IsSorted(a, n));
            return (p);
        }
        public static bool IsSorted(int[] a, int n)
        {
            while (--n >= 1)
            {
                if (a[n] < a[n - 1]) return false;
            }
            return true;
        }
        public static void shuffle(int[] a, int n)
        {
            int i, t, r;
            Random rand = new Random();
            for (i = 0; i < n; i++)
            {
                t = a[i];
                r = rand.Next(n);
                a[i] = a[r];
                a[r] = t;
            }
        }
    }
}
