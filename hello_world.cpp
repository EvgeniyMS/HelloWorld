// Hello World from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"

#include <windows.h>
#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    std::cout << "������, programming!\n��� � ��!\n";
    keep_window_open();
    // char string[20];
    // cin >> string; // ������ ������, ��������� ���������
    // cout << "\n�����: "<< string << endl; // ����� ������
    // system("pause");
    return 0; 
}
