#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    // std::cout << "Здравствуй, Мир!\n";
    char string[20];
    cin >> string; // вводим строку, используя Кириллицу
    cout << "\nвывод: "<< string << endl; // ввывод строки
    system("pause");
    return 0;
}
