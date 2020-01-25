// Name & Age from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"

#include "std_lib_facilities.h"

int main()
{
    
    std::cout << "Hi, please input your name and your age!\n";
    string first_name = "???";
    double age = -1;
    cin >> first_name >> age;
    age +=100;
    cout << "Hi " << first_name << "\nYou are " << age << " now\n";
    // keep_window_open();
    // char string[20];
    // cin >> string; // вводим строку, используя кириллицу
    // cout << "\nвывод: "<< string << endl; // вывод строки
    // system("pause");
    return 0; 
}
