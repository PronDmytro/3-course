using k2020_lr7;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

namespace k2020_lr7
{
    class TWheel
    {
        // Клас «Колесо»        

        public int spokeCout; //Кількість спиць
        public int diametr; //Діаметр колес

        public void ScanParams()
        {
            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("\n\n[TWheel] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Кiлькiсть спиць: ");
            try
            {
                spokeCout = Convert.ToInt32(Console.ReadLine()); // Число
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! The value will be zero!");
                Console.WriteLine("DESCRIPTION: " + e.Message);
                spokeCout = 0;
            }
            Console.Write("Дiаметр колес : ");
            try
            {
                diametr = Convert.ToInt32(Console.ReadLine()); // Число
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! The value will be zero!");
                Console.WriteLine("DESCRIPTION: " + e.Message);
                diametr = 0;
            }

        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor = ConsoleColor.White;
            Console.WriteLine("\n\n[TWheel] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Кiлькiсть спиць : " + spokeCout);
            Console.WriteLine("Дiаметр колес : " + diametr);
            Console.WriteLine();

        }
    }


    class Tframe
    {
        // Класс «Рама»
        public string colour; //колір рами   
        public string type; //тип рами
        public string material; //матеріал

        public void ScanParams()
        {
            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor =
                ConsoleColor.Yellow;
            Console.WriteLine("\n\n[Tframe] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Колiр рами: ");
            colour = Console.ReadLine(); // Текст
            Console.WriteLine("\n\n[Tframe] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Тип рами: ");
            type = Console.ReadLine(); // Текст
            Console.WriteLine("\n\n[Tframe] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Матеріал рами: ");
            material = Console.ReadLine(); // Текст


        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor =
                ConsoleColor.White;
            Console.WriteLine("\n\n[Tframe] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Колiр рами : " + colour);
            Console.WriteLine();
            Console.WriteLine("\n\n[Tframe] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Тип рами : " + colour);
            Console.WriteLine();
            Console.WriteLine("\n\n[Tframe] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Матеріал рами : " + colour);
            Console.WriteLine();

        }

    }


    class Trudder
    {
        // Клас «Руль»
        public string colour; //колір руля
        public int height; //Висота руля

        public void ScanParams()
        {
            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("\n\n[Trudder] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Колiр руля: ");
            colour = Console.ReadLine(); // Текст
            Console.Write("Висота руля : ");
            try
            {
                height = Convert.ToInt32(Console.ReadLine()); // Число
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! The value will be zero!");
                Console.WriteLine("DESCRIPTION: " + e.Message);
                height = 0;
            }


        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor = ConsoleColor.White;
            Console.WriteLine("\n\n[Trudder] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Колiр руля : " + colour);
            Console.WriteLine("Висота руля : " + height);
            Console.WriteLine();


        }

    }

    class TBike
    {
        // Класс «Велосипед»


        public string model; //Модель
        public string firm; //Назва фірми яка його виготовила
        public string DateOfCreation; //дата виробництва
        public bool isworked; //Працюючому стані

        public TWheel wheel; // Клас «Колесо»
        public Tframe frame; // Класс «Рама»
        public Trudder rudder; // Клас «Руль»

        public bool CheckDate(string dtstr)
        { // метод який перевіряє правильність вводу дати.
            // Якщо дата невірна повертає false. Якщо вірна - true; Приймає дату в типі
            bool date_correct = true;
            // * * * * * * * * * * * * * * * * * * * * * * * *
            try
            {
                DateTime.Parse(dtstr);
            }
            catch (Exception e)
            {
                date_correct = false;
            }
            // * * * * * * * * * * * * * * * * * * * * * * * *
            return date_correct;
        }
        public bool CheckName(string namestr)
        { // метод який перевіряє правильність вводу імені.
            // Якщо ім'я введено некорректно, то повертає false, інакше - true; Приймає ім'я в типі string
            bool name_correct = true;
            // * * * * * * * * * * * * * * * * * * * * * * * 
            for (var i = 0; i < 38; i++)
            {
                if (!Regex.IsMatch(namestr, @"^[A-Za-z]+$"))
                {
                    name_correct = false;
                }
            }
            // * * * * * * * * * * * * * * * * * * * * * * * *
            return name_correct;
        }

        public void Separator(int count, char symb)
        {
            var separator = "";
            for (var i = 0; i < count; i++)
            {
                separator += symb;
            }
            Console.WriteLine(separator);

        }
        public void InputSeparatorDate(ref int count, ref char symb)
        {
            Console.WriteLine(" Enter count of symbols and symbol" + System.Environment.NewLine + " symbol: ");
            try
            {

                symb = Convert.ToChar(Console.ReadLine());
            }
            catch (Exception e)
            {
                Console.WriteLine(" ERROR: Dta entry error!The value will be = ");
                Console.WriteLine(" DESCRIPTION: " + e.Message);
                symb = '=';
            }
            Console.WriteLine(" Count of symbols: ");
            try
            {
                count = Convert.ToInt32(Console.ReadLine());
            }
            catch (Exception e)
            {
                Console.WriteLine(" ERROR: Dta entry error!The value will be zero!");
                Console.WriteLine(" DESCRIPTION: " + e.Message);
                count = 0;
            }
        }
        
        public TBike()
        {
            // Constructor
            wheel = new TWheel();
            frame = new Tframe();
            rudder = new Trudder();
        }

        ~TBike()
        {
            // Destructor

        }

        public void ScanParams()
        {
            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor = ConsoleColor.Yellow;

            Console.WriteLine("[TBike] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Модель  : ");
            model = Console.ReadLine(); // Текст
            Console.Write("Фiрма : ");
            firm = Console.ReadLine(); // Текст
            if (CheckName(firm))
            {
                Console.WriteLine("Iм'я введено корректно!");
            }
            else
            {
                Console.WriteLine("Iм'я введено не корректно!");
            }
            Console.Write("Дата : ");
            DateOfCreation = Console.ReadLine(); // Текст
            if (CheckDate(DateOfCreation))
            {
                Console.WriteLine("Дата введена корректно!");
            }
            else
            {
                Console.WriteLine("Дата введена не корректно!");
            }
            Console.Write("Працюючому станi : ");
            string tmp_work = Console.ReadLine().ToUpper();
            isworked = (tmp_work == "YES" || tmp_work == "Y" ? true : false); // bool
        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor = ConsoleColor.White;
            Console.WriteLine("[TBike] :: PRINTPARAMS");
            Console.ResetColor();
            Console.WriteLine("Модель : " + model);
            Console.WriteLine("Фiрма : " + firm);
            Console.WriteLine("Дата виготовлення : " + DateOfCreation);
            Console.WriteLine("В працюючому станi : " + isworked);
        }

        public void ScanAllParams(int count, char symb)
        {
            Separator(count, symb);
            ScanParams();
            Separator(count, symb);

            wheel.ScanParams();

            Separator(count, symb);
            frame.ScanParams();

            Separator(count, symb);
            rudder.ScanParams();
            Separator(count, symb);
        }

        public void PrintAllParams(int count, char symb)
        {
            PrintParams();
            Separator(count, symb);
            wheel.PrintParams();
            Separator(count, symb);
            frame.PrintParams();
            Separator(count, symb);
            rudder.PrintParams();
            Separator(count, symb);
        }
        public delegate void CallBack();
        public void ShowAuthor(CallBack obj)
        {
            obj();
        }

    }
}

class Program
{
    public static int count = 12;
    public static char symb = '=';

    private static void CallBack()
    {
        Console.WriteLine("Author: Dmytro Pron ");
    }
    private static void Main(string[] args)
    {
        var bike = new TBike();
        bike.InputSeparatorDate(ref count, ref symb);
        bike.ScanAllParams(count, symb); // зчитуємо всі необхідні дані для заповнення полів класів
        bike.Separator(count, symb);
        bike.PrintAllParams(count, symb); // виводимо всі дані полів класів
        bike.Separator(count, symb);
        bike.ShowAuthor(CallBack);
        Console.WriteLine("PROGRAM STOP!");
        Console.Beep();
        Console.ReadLine();

    }
}

