using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp8
{
    class Program
    {
        static void Main(string[] args)
        {
            bool stop = false;
            do
            {
            Console.WriteLine("0 - Выход");
            Console.WriteLine("1 - Сложение");
            Console.WriteLine("2 - Вычитание");
            Console.WriteLine("3 - Умножение");
            Console.WriteLine("4 - Деление");
            Console.WriteLine("5 - Перевод из десятичной в двоичную");
            Console.WriteLine("6 - Уравнение");
            int menu = 0;
                int per=0;
                int znak = 0;
            menu = Convert.ToInt32(Console.ReadLine());
                switch (menu)
                {
                    case 0:
                        stop = true;
                        break;
                    case 1:
                        znak = 1;
                        dest(znak);
                        break;
                    case 2:
                        znak = 2;
                        dest(znak);
                         break;
                    case 3:
                        znak = 3;
                        dest(znak);
                        break;
                    case 4:
                        znak = 4;
                        dest(znak);
                        break;
                    case 5:
                        Console.WriteLine("Введите число в десятичной системе счисление");
                        per = Convert.ToInt32(Console.ReadLine());
                        Console.Write("Результат - ");
                        Console.WriteLine(Convert.ToString(per, 2));
                        Console.ReadKey();
                        break;
                    case 6:
                        urav();
                        break;
                }
                Console.Clear();
            } while (stop != true);
        }
        static void urav()
        {
            int a, b, c = 0;
            double d = 0;
            double g = 0;
            double x1, x2=0;
            Console.WriteLine("ax^2+bx+c");
            Console.Write("Введите число а - ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите число b - ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите число c - ");
            c = Convert.ToInt32(Console.ReadLine());
            d = (Math.Pow(b,2)) -( 4 * a * c);
            Console.Write("Дискриминант - ");
            Console.WriteLine(d);
            g = Math.Sqrt(d);
            if (d < 0)
            {
                Console.WriteLine("Корней нет");
            }
            else if (d > 0)
            {
                x1 = (-b + g) / (2 * a);
                x2 = (-b - g) / (2 * a);
                Console.Write("Первый корень - ");
                Console.WriteLine(x1);
                Console.Write("Второй корень - ");
                Console.Write(x2);
            } else if (d == 0)
            {
                x1 = -b / (2 * a);
                Console.Write("Корень - ");
                Console.WriteLine(x1);
            }
            Console.ReadKey();
        }
        static void dest(int znak)
        {
            double c=0;
            double a=0;
            double b = 0;
            Console.Write("Введите первое число - ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите второе число - ");
            b = Convert.ToDouble(Console.ReadLine());
            if (znak == 1) {
                c = a + b;
            } else if (znak == 2) {
                c = a - b;
            }
            else if (znak == 3) {
                c = a * b;
            }
            else if (znak == 4) {
                c = a / b;
            }
            Console.Write("Результат - ");
            Console.Write(c);
            Console.ReadKey();
        }
    }
}
