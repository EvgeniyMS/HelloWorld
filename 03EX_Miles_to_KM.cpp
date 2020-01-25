// глава 03 from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"
// Программа преобразования миль в километры

#include "std_lib_facilities.h"
#include <windows.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    double miles = 0.0;
    double km_in_mile = 1.609; // сухопутная миля в км
    double km_in_mile_n = 1.852; // морская миля в км
    cout << "Сколько миль? ";
    cin >> miles; // вводим число миль
    cout << endl << miles << " сухопутных миль равно "<< miles*km_in_mile << " км"; // вывод строки    system("pause");
    cout << endl << miles << " морских миль равно "<< miles*km_in_mile_n << " км" << endl; // вывод строки    system("pause");
    keep_window_open("x");
    return 0;
}
