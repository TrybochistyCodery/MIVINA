using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IFFF
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, res;
            int pr,aInt,bInt,cInt;
            char curr = 'a';
            do
            {

                Menu();
                try
                {
                    curr = Convert.ToChar(Console.ReadLine());
                }
                catch
                {
                    Console.WriteLine("Ошибка");
                }
                Console.Clear();
                switch (curr) { 

                    case '/':
                        Vvedite('a');
                        a = Convert.ToDouble (Console.ReadLine());
                        Vvedite('b');
                        b = Convert.ToDouble(Console.ReadLine());
                        res = a / b;
                        Console.WriteLine($"Резлуьтат {res}");
                        break;
                    
                    case '*':
                        Vvedite('a');
                        a = Convert.ToDouble(Console.ReadLine());
                        Vvedite('b');
                        b = Convert.ToDouble(Console.ReadLine());
                        res = a * b;

                        Console.WriteLine($"Резлуьтат {res}");
                        break;
                    case '+':
                        Vvedite('a');
                        a = Convert.ToDouble(Console.ReadLine());
                        Vvedite('b');
                        b = Convert.ToDouble(Console.ReadLine());
                        res = a + b;

                        Console.WriteLine($"Резлуьтат {res}");
                        break;
                    case '-':
                        Vvedite('a');
                        a = Convert.ToDouble(Console.ReadLine());
                        Vvedite('b');
                        b = Convert.ToDouble(Console.ReadLine());
                        res = a - b;

                        Console.WriteLine($"Резлуьтат {res}");
                        break;
                    case '2':
                        Vvedite('a');
                        pr = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine($"Результат {Convert.ToString(pr, 2)}");
                        break;
                    case 'k':
                        Vvedite('a');
                        aInt = Convert.ToInt32(Console.ReadLine());
                        Vvedite('b');
                        bInt = Convert.ToInt32(Console.ReadLine());
                        Vvedite('c');
                        cInt = Convert.ToInt32(Console.ReadLine());
                        KvadratnoeYravnenie(aInt, bInt, cInt);
                        break;

                }
                Console.ReadKey();
                Console.Clear();
            } while (curr != 'e');

     
            

            Console.ReadKey();
        }

        static void Menu()
        {
            Console.WriteLine("Деление                /");
            Console.WriteLine("Умножение              *");
            Console.WriteLine("Сложение               +");
            Console.WriteLine("Разность               -");
            Console.WriteLine("В двоичную             2");

            Console.WriteLine("Квадратное уравнение   k");
        }

        static void Vvedite(char a)
        {
            Console.WriteLine($"Введите {a}");
        }

        static void KvadratnoeYravnenie(int a,int b,int c)
        {

            double d = Math.Pow(b, 2) - 4 * a * c;
            if(d>0 || d == 0)
            {
                double x1 = (-b + Math.Sqrt(d)) / (2 * a);
                double x2 = (-b + Math.Sqrt(d)) / (2 * a);
                Console.WriteLine($"X1 = {x1} \n" +
                    $"X2 = {x2}\n" +
                    $"D = {d}");
            }
            else
            {
                Console.WriteLine("D Меньше нуля");
            }

        }
    }
}
