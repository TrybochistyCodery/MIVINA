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
            Random rand = new Random();
            int[] a = new int[10];
            for (int i = 0; i < 10; i++)
            {
                a[i] = rand.Next(101);
            }
            InsertionSort(a);
            Console.ReadKey();
        }
        public static int[] InsertionSort(int[] a)
        {
            Console.WriteLine("Исходный массив - ");
            for (int i = 1; i < a.Length; i++)
            {
                Console.WriteLine(a[i]);
            }
            for (int i = 1; i < a.Length; i++)
            {
                int key = a[i];//берем карту в правую руку
                int j = i - 1;//карта с которой начинаем сравнение
                while (j >= 0 && a[j] > key)
                {
                    a[j + 1] = a[j];//смещаем карту на след. позицию
                    j--;// переходим к следующей сравниваемой карте
                }
                a[j + 1] = key;//вставляем карту из правой руки
            }
            Console.WriteLine("Отсортированный массив - ");
            for (int i = 1; i < a.Length; i++)
            {
                Console.WriteLine(a[i]);
            }
            return a;
        }
    }
} 
