// ����� 04 from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"
// ������ ����������

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
    cout << "������� ����� �����: ";
    cin >> x;
    cout << "������� ��������� ����� " << x << " ����� " << MySquare(x) << endl;
    
    keep_window_open("x");
    return 0;
}
