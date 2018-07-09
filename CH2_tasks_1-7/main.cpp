#include <iostream>

using namespace std;

void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);

int main(int argc, char** argv) {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    return 0;
}

void PrintTaskName(int num)
{
    cout << "\nTask " << num << ": \n";
}
/*Напишите программу на C++, которая отобразит ваше имя и адрес (можете ука­
зать фиктивные данные).*/
void task1(void)
{
    PrintTaskName(1);
    string name = "Alexey Babenko";
    cout << name << endl;
}

/*Напишите программу на C++, которая выдает запрос на ввод расстояния в фарлон­
гах и преобразует его в ярды. (Один фарлонг равен 220 ярдам, или 201168 м.)*/
void task2(void)
{
    PrintTaskName(2);
    long double farlong = 0;
    cout << "Enter length in farlongs: ";
    cin >> farlong;
    cout << farlong << " farlongs = " << farlong*220. << " yards" << endl;
}
/*Напишите программу на C++, которая использует три определяемых пользова­
телем функции (включая main ()) и генерирует следующий вывод:
Three blind mice
Three blind mice
See how they run
See how they run*/
void PrintThree(void) 
{
    cout << "Three blind mice" << endl;
}
void PrintSee(void) 
{
    cout << "See how they run" << endl;
}
void task3(void)
{
    PrintTaskName(3);
    PrintThree();
    PrintThree();
    PrintSee();
    PrintSee();
}

/*Напишите программу, которая предлагает пользователю ввести свой возраст.
Затем программа должна отобразить возраст в месяцах:
Enter your age: 29
Your age in months is 348.*/
void task4(void)
{
    PrintTaskName(4);
    int age = 0;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in month is " << age*12 << endl;
}

/*Напишите программу, в которой функция main() вызывает определяемую
пользователем функцию, принимающую в качестве аргумента значение темпе­
ратуры по Цельсию и возвращающую эквивалентное значение температуры по
Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
отобразить следующий результат:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.*/
double CelsiusToFahrenheit(double celsius) 
{
    return 1.8*celsius+32;
}
void task5(void)
{
    PrintTaskName(5);
    double celsius = 0;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " <<  CelsiusToFahrenheit(celsius)
            << " degrees Fahrenheit." << endl;
}

/*Напишите программу, в которой функция main () вызывает определяемую поль­
зователем функцию, принимающую в качестве аргумента расстояние в световых
годах и возвращающую расстояние в астрономических единицах. Программа
должна выдать запрос на ввод значения в световых годах и отобразить следую­
щий результат:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
Астрономическая единица равна среднему расстоянию Земли от Солнца (около
150 000 000 км, или 93 000 000 миль), а световой год соответствует расстоянию,
пройденному лучом света за один земной год (примерно 10 триллионов кило­
метров, или 6 триллионов миль). (Ближайшая звезда после Солнца находится
на расстоянии 4,2 световых года.) Используйте тип double (как в листинге 2.4)
и следующий коэффициент преобразования:
1 световой год = 63 240 астрономических единиц*/
double LightYearsToAstrUnits(double lightYears) 
{
    const double Coeff = 63240.;
    return lightYears*Coeff;
}
void task6(void)
{
    PrintTaskName(6);
    double lightYears = 0;
    cout << "Enter the number of light years:";
    cin >> lightYears;
    cout << lightYears << " light years = " <<  LightYearsToAstrUnits(lightYears)
            << " astronomical units." << endl;
}

/*Напишите программу, которая выдает запрос на ввод значений часов и минут.
Функция main () должна передать эти два значения функции, имеющей тип
void, которая отобразит эти два значения в следующем виде:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28*/
void PrintTime (int hours, int minutes) 
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
void task7(void)
{
    PrintTaskName(7);
    int hours = 0;
    int minutes = 0;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    
    PrintTime(hours, minutes);
}