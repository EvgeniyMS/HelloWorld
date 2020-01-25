// Hello World from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"

#include <windows.h>
#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    std::cout << "Привет, programming!\nВот и мы!\n";
    keep_window_open();
    // char string[20];
    // cin >> string; // вводим строку, используя кириллицу
    // cout << "\nвывод: "<< string << endl; // вывод строки
    // system("pause");
    return 0; 
}
