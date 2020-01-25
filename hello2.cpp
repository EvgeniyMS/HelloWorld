#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    std::cout << "Здравствуй, Мир\n";
    char string[20];
    cin >> string; // вводим строку, используя кириллицу
    cout << "\nвывод: "<< string << endl; // вывод строки    system("pause");
    return 0;
}
