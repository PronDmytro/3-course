using k2020_lr5;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace k2020_lr5
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
                Console.WriteLine("DESCRIPTION: "+e.Message);
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
                Console.WriteLine("DESCRIPTION: "+e.Message);
                diametr = 0;
            }
            try
            {
                diametr = Convert.ToInt32(Console.ReadLine()); // Число
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! The value will be zero!");
                Console.WriteLine("DESCRIPTION: "+e.Message);
                diametr = 0;
            }

        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor =
                ConsoleColor.White;
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

        public void ScanParams()
        {
            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor =
                ConsoleColor.Yellow;
            Console.WriteLine("\n\n[Tframe] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Колiр рами: ");
            colour = Console.ReadLine(); // Текст


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
            Console.ForegroundColor =
                ConsoleColor.Yellow;
            Console.WriteLine("\n\n[Trudder] :: SCANPARAMS");
            Console.ResetColor();
            Console.Write("Колiр руля: ");
            colour = Console.ReadLine(); // Текст
            Console.Write("Висота руля : ");
            height = Convert.ToInt32(Console.ReadLine()); // Число

            try
            {
                height = Convert.ToInt32(Console.ReadLine()); // Число
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! The value will be zero!");
                Console.WriteLine("DESCRIPTION: "+e.Message);
                height = 0;
            }
        }

        public void PrintParams()
        {
            Console.BackgroundColor = ConsoleColor.DarkGreen;
            Console.ForegroundColor =
                ConsoleColor.White;
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
        public string dob; //дата виробництва
        public bool isworked; //Працюючому стані

        public TWheel wheel; // Клас «Колесо»
        public Tframe frame; // Класс «Рама»
        public Trudder rudder; // Клас «Руль»

        public bool CheckDate(string dtstr)
        { // метод який перевіряє правильність вводу дати.
        // Якщо дата невірна повертає false. Якщо вірна - true; Приймає дату в типі
        string
        bool date_correct = true;
        // * * * * * * * * * * * * * * * * * * * * * * * *
        // Ваш код для перевірки введеної дати (Л.Р.№5)
        // * * * * * * * * * * * * * * * * * * * * * * * *
            return date_correct;
        }
        public bool CheckName(string namestr)
        { // метод який перевіряє правильність вводу імені.
        // Якщо ім'я введено некорректно, то повертає false, інакше - true; Приймає ім'я в типі string
            bool name_correct = true;
        // * * * * * * * * * * * * * * * * * * * * * * * *
        // Ваш код для перевірки введеної дати (Л.Р.№5)
        // * * * * * * * * * * * * * * * * * * * * * * * *
            return name_correct;
        }
        public Separate (string sepr, int count)
        {
            for(int i = 0; i < count; i++)
            {
                sepr+=sepr;
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
            Console.ForegroundColor =
                ConsoleColor.Yellow;
            Console.WriteLine("[TBike] :: SCANPARAMS");
            Console.ResetColor();

            Console.Write("First Name : ");
            firstName = Console.ReadLine(); // Текст
            if (CheckName(firstName))
            {
                Console.WriteLine("Ім'я введено корректно!: ");
            }
            else
            {
                Console.WriteLine("Ім'я введено не корректно!: ");
            }

            Console.Write("Last Name : ");
            lastName = Console.ReadLine(); // Текст
            if (CheckName(lastName))
            {
                Console.WriteLine("Прізвище введено корректно!: ");
            }
            else
            {
                Console.WriteLine("Прізвище введено не корректно!: ");
            }
           
            Console.Write("Middle Name : ");
            middleName = Console.ReadLine(); // Текст
            if (CheckName(middleName))
            {
                Console.WriteLine("По батькові введено корректно!: ");
            }
            else
            {
                Console.WriteLine("По батькові введено не корректно!: ");
            }
            
            Console.Write("Date Of Birth : ");
            dob = Console.ReadLine(); // Текст
            if (CheckDate(dob))
            {
                Console.WriteLine("Дата введена корректно!: ");
            }
            else
            {
                Console.WriteLine("Дата введена не корректно!: ");
            }

            Console.Write("Модель  : ");
            model = Console.ReadLine(); // Текст
            Console.Write("Фiрма : ");
            firm = Console.ReadLine(); // Текст
            Console.Write("Дата : ");
            dob = Console.ReadLine(); // Текст
            if (CheckDate(dob))
            {
                Console.WriteLine("Дата введена корректно!: ");
            }
            else
            {
                Console.WriteLine("Дата введена не корректно!: ");
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
            Console.WriteLine("Дата виготовлення : " + dob);
            Console.WriteLine("В працюючому станi : " + isworked);
        }

        public void ScanAllParams()
        {
            ScanParams();
           f.Separator(count, symb);
            wheel.ScanParams();


           f.Separator(count, symb);
            frame.ScanParams();

            f.Separator(count, symb);
            rudder.ScanParams();
            f.Separator(count, symb);
        }

        public void PrintAllParams()
        {
            PrintParams();
            f.Separator(count, symb);
            wheel.PrintParams();
            f.Separator(count, symb);
            frame.PrintParams();
            f.Separator(count, symb);
            rudder.PrintParams();
            f.Separator(count, symb);
        }
        public void Separator(int count, char symb)
        {
            string separator = "";
            for (int i = 0; i < count; i++)
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

        public void EnterAndCheckDate(string DateOfCreation)
        {
            Console.Write("\tEnter date of create : ");
            DateOfCreation = Console.ReadLine();
            try
            {
                DateTime.Parse(DateOfCreation);
            }
            catch (Exception e)
            {
                Console.WriteLine("ERROR: Data entry error! Date will be today!");
                Console.WriteLine("DESCRIPTION: " + e.Message);
                DateOfCreation = DateTime.Today.ToShortDateString();
            }
        }

        public void EnterAndCheckAuthorName(char AuthorName)
        {
            try
            {
                Console.Write("\tEnter Author name : ");
                AuthorName = Convert.ToChar(Console.ReadLine());
            }
            catch (Exception e)
            {

            }
        }

        public void ShowDateAndAuthor(char AuthorName, string DateOfCreation)
            {
                Console.WriteLine("Author name" + AuthorName);
                Console.WriteLine("Date of create" + DateOfCreation);
            }

    }
}

class Program
{
    public static int count = 12;
    public static char symb = '=';
    public static string DateOfCreation;
    public static char AuthorName;
    public static void CallBack()
    {
        Console.WriteLine("Author: Pron Dmytro ");
    }

    static void Main(string[] args)
    {
        TBike bike = new TBike();
        f.InputSeparatorDate(ref count, ref symb);
        bike.ScanAllParams(); // зчитуємо всі необхідні дані для заповнення полів класів
        f.Separator(count, symb);
        bike.PrintAllParams(); // виводимо всі дані полів класів
        f.Separator(count, symb);
        Console.WriteLine("PROGRAM STOP!");
        Console.Beep();
        Console.ReadLine();

    }
}

