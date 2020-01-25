// глава 04 from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"
// Разные упражнения

#include "std_lib_facilities.h"
#include <windows.h>

int MySquare(int x);

MySquare(int x) {
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        result += x; 
    }
    return result;
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int x = 0;
    cout << "Введите целое число: ";
    cin >> x;
    cout << "Квадрат введеного числа " << x << " равен " << MySquare(x) << endl;
    
    keep_window_open("x");
    return 0;
}
