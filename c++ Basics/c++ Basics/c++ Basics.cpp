#include <iostream>



void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();
int Valid();
void Clear();
void end();

int main()
{
    test1();
    end();
    test2();
    end();
    test3();
    end();
    test4();
    end();
    test5();
    end();
    test6();
    end();
    test7();
    end();
    test8();
    end();
    test9();
    end();
    test10();
}

void test1()
{
    std::cout << "Program 1-1\n" << std::endl;
    char character[4];
    int age;
    bool tru = true;
    std::cout << "Enter your initials: ";
    std::cin >> character;
    std::cout << "Enter your age: ";
    age = Valid();
    std::cout << character << ", did you know you are at least " << age * 365 << " days old?\n\n" << std::endl;



}

void test2()
{
    std::cout << "Program 1-2\n" << std::endl;
    int num[5];


    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter a number: ";
        num[i] = Valid();
    }
    for (int j = 0; j < 5; j++)
    {
        std::cout << num[j] << "";
    }

    std::cout << std::endl;
    std::cout << std::endl;
}

void test3()
{
    std::cout << "Program 1-3\n" << std::endl;
    int a, b, c;
    std::cout << "Enter A: ";
    std::cin >> a;
    std::cout << "Enetr B: ";
    std::cin >> b;
    std::cout << "Enter C: ";
    std::cin >> c;
    std::cout << "A + 1 * B + 2 - C = " << a + 1 * b + 2 - c << "\n";
    std::cout << "(A + 1) * (B + 2 ) - C = " << (a + 1) * (b + 2) - c << "\n";
    std::cout << std::endl;

}

void test4()
{
    std::cout << "Program 1-4\n" << std::endl;
    std::cout << "Type\t\tRange\n";
    std::cout << "-----------------------------\n";
    std::cout << "ushort \t\t0 to " << USHRT_MAX << "\n";
    std::cout << "short \t\t" << SHRT_MIN << " to " << SHRT_MAX << "\n";
    std::cout << "int \t\t" << INT_MIN << " to " << INT_MAX << "\n";
    std::cout << "uint \t\t0 to " << UINT_MAX << "\n";
    std::cout << "longlong \t" << LONG_MIN << " to " << LONG_MAX << "\n";
    std::cout << "ulonglong \t0 to " << ULONG_MAX << "\n";

}

void test5()
{
    std::cout << "Program 1-5\n" << std::endl;
    char name[32];
    std::cout << "Enter your name: ";
    std::cin.ignore(1);
    std::cin.getline(name, 32);
    std::cout << "You know " << name << " the world could always use more heroes!\n";
    std::cout << std::endl;
}

void test6()
{
    std::cout << "Program 1-6\n" << std::endl;
    int age;
    std::cout << "How old are you: ";
    std::cin >> age;
    if (age < 16)
    {
        std::cout << "You are too young. Come back when you arent wearing DIAPERS anymore!\n";
    }
    else if (age > 16 && age < 30)
    {
        std::cout << "Your finally old enough to play.\n";
    }
    else
    {
        std::cout << "Alright oldman show us what you got!!!\n";
    }
    std::cout << std::endl;
}

void test7()
{
    std::cout << "Program 1-7\n" << std::endl;
    int num;
    std::cout << "Please enter an even number: ";
    std::cin >> num;
    if (num % 2 == 0)
    {
        std::cout << "Thank you\n";
    }
    else
    {
        std::cout << "That does not work!\n";
    }
    std::cout << std::endl;
}

void test8()
{
    std::cout << "Program 1-8\n" << std::endl;
    int num;
    int i = 0;
    std::cout << "Please enter a divisor: ";
    num = Valid();
    srand(time(NULL));
    while (i < 3)
    {

        int random = rand();
        std::cout << random;
        if (random % num == 0)
        {
            std::cout << "\t - Yes\n";
        }
        else
        {
            std::cout << "\t - No\n";
        }
        i++;
    }
    std::cout << std::endl;
}

void test9()
{
    std::cout << "Program 1-9\n" << std::endl;
    int character;
    std::cout << "What color Popsicle do you want from the freezer?\n1) Red \n2) Green \n3) Blue \n13) Orange\n" << std::endl;
    std::cin >> character;
    switch (character)
    {
    case 1:
        std::cout << "Red like my heart\n";
        break;
    case 2:
        std::cout << "Green! hey I like that color too!\n";
        break;
    case 3:
        std::cout << "Blue as the sky!\n";
        break;
    case 13:
        std::cout << "Orange?? are you sure??\n";
        break;
    default:
        std::cout << "Not a valid choice\n";
    }
    std::cout << std::endl;
}

void test10()
{
    std::cout << "Program 1-10\n" << std::endl;
    int character;
    int r1 = rand() % 10 + 1;
    int r2 = rand() % 30 + 50;
    int r3 = rand() % 75 + 100;
    std::cout << "Difficulty Levels:\n1) Easy \n2) Medium \n3) Hard\n";
    std::cin >> character;
    switch (character)
    {
    case 1:
        std::cout << "You will have to fight " << r1 << " enemies you wimp!\n";
        break;
    case 2:
        std::cout << "You will have to fight " << r2 << " enemies, did you level up from a wimp to a warrior?!\n";
        break;
    case 3:
        std::cout << "You will have to fight " << r3 << " enemies! you must be hacking!\n";
        break;
    default:
        std::cout << "Not a valid choice\n";
    }

    std::cout << std::endl;

}
void end()
{
    system("PAUSE");
    system("CLS");
}

void Clear()
{
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}

int Valid()
{
    int num;
    while (!(std::cin >> num))
    {
        std::cout << "Invalid... Try Again!\n";
        Clear();


    }
    return num;
}



