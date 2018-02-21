using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp7
{
    class person
    {
        public string name;
        public int age;
        public person(string a,int b)
        {
            name = a;
            age = b;
        }
        public void info()
        {
            Console.WriteLine(name);
            Console.WriteLine(age);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            person bob = new person("Sam",33);
            Console.WriteLine("Введите имя :");
            bob.name=Console.ReadLine();
            Console.WriteLine("Введите возраст");
            bob.age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("---");
            bob.info();
            Console.ReadKey();
        }
    }
}
