using System;


namespace Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[15000];                //Объявление массива
            Random rnd = new Random();                   //Рандом
            for(int i = 0; i<1500;i++)                      
            {
                array[i] = rnd.Next(1, 1300);            //Метод Next возвращает рандомное значение в указанных диапозонах
                Console.WriteLine(array[i]+ " "+ i);     //Вывод массива

            }
            Console.ReadKey();
        }
    }
}
