// ����� 02 from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"
// ��������� ��������������� ������ ����������

#include <windows.h>
#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    cout << "����������, ������� �������� � ��������� ������: ";
    int n;
    cin >> n;
    cout << "\nn == " << n
        << "\nn+1 ==" << n+1
        << "\n��� ���� �� n == " << 3*n
        << "\n��� ���� �� n == " << n+n
        << "\nn � �������� == " << n*n
        << "\n�������� n == " << n/2
        << "\n������ ���������� �� n == " << sqrt(n)
        << '\n';
    return 0; 
}
