// ����� 04 from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"
// ������� � ����� �����

#include "std_lib_facilities.h"
#include <windows.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ��� ����� ����� ��� '|' ��� ����������" << endl; 
    vector<int> numbers = {0,0};
    bool proceed = true;
    while (proceed)
    {
        char smbl;
        cout << ": ";
        cin >> smbl;
        numbers[0] = smbl;
        cout << numbers[0] << " and " << numbers[1] << endl;
        if (numbers[0] == '|')
            proceed = false; // end of while
        else {
            cout << ": ";
            cin >> smbl;
            numbers[1] = smbl;
            if (numbers[1] == '|')
                proceed = false; // end of while
                else {
                    cout << numbers[0] << " and " << numbers[1] << endl;
                }
        }    
    }
    

    keep_window_open("x");
    return 0;
}
