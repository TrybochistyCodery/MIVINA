using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ведите количество чисел для сортировки.");
            int N = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите числа для сортировки:");
            int[] mas = new int[N];
            Random rand = new Random();
            for (int i = 0; i < mas.Length; i++)
            {
                mas[i] = rand.Next(101);
            }
            Console.WriteLine("Исходный массив:");
            for (int i = 0; i < mas.Length; i++)
            {
                Console.WriteLine(mas[i]);
            }
            ViborSort(mas);
            Console.WriteLine("Отсортированный массив:");
            for (int i = 0; i < mas.Length; i++)
            {
                Console.WriteLine(mas[i]);
            }
            Console.ReadLine();
        }
 static int[] ViborSort(int[] mas)
        {

            for (int i = 0; i < mas.Length - 1; i++)
            {
                //поиск минимального числа
                int min = i;
                for (int j = i + 1; j < mas.Length; j++)
                {
                    if (mas[j] < mas[min])
                    {
                        min = j;
                    }
                }
                //обмен элементов
                int temp = mas[min];
                mas[min] = mas[i];
                mas[i] = temp;
            }
            return mas;
        }
    }
}
