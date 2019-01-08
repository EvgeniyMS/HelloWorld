#include <iostream>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);

    std::cout << "Здравствуй, Мир!";
    return 0;
}
