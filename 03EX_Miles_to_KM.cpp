// ����� 03 from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"
// ��������� �������������� ���� � ���������

#include "std_lib_facilities.h"
#include <windows.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    double miles = 0.0;
    double km_in_mile = 1.609; // ���������� ���� � ��
    double km_in_mile_n = 1.852; // ������� ���� � ��
    cout << "������� ����? ";
    cin >> miles; // ������ ����� ����
    cout << endl << miles << " ���������� ���� ����� "<< miles*km_in_mile << " ��"; // ����� ������    system("pause");
    cout << endl << miles << " ������� ���� ����� "<< miles*km_in_mile_n << " ��" << endl; // ����� ������    system("pause");
    keep_window_open("x");
    return 0;
}
