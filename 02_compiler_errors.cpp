// глава 02 from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"
// Программа демонстрирующая работу компилятора при нахождении ошибок в коде

#include <windows.h>
#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string f_name = "E", l_name = "S";
    int age = 56;
    cout << "Введиту Имя Фамилию Возраст, все через пробел: ";
    cin >> f_name >> l_name >> age;
    cout << f_name << " " << l_name << " " << age << "\n\n";
    keep_window_open();
    return 0;

    double d;
    cout << "Enter double: ";
    while (cin >> d) {
        int i = {d};
        char c = {i};
        char c2 = {d};
        int i2 = {c};
    cout << "d == " << d
         << "\ni == " << i
         << "\nc == " << c
         << "\nc2 == " << c2
         << "\ni2 == " << i2 << '\n';
    };
    
    return 0;
}
