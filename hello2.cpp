#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    std::cout << "����������, ���\n";
    char string[20];
    cin >> string; // ������ ������, ��������� ���������
    cout << "\n�����: "<< string << endl; // ����� ������    system("pause");
    return 0;
}
