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
    vector<int> numbers = {1,2};
    bool proceed = true;
    while (proceed)
    {
        cout << ": ";
        cin >> numbers[0];
        cout << numbers[0];
        cin >> numbers[0];
        if (numbers[0] == '|')
            proceed = false; // end of while
        else {
            cout << endl << ": ";
            cin >> numbers[1];
            if (numbers[1] == 0)
                proceed = false; // end of while
                else {
                    cout << endl << numbers[0] << " and " << numbers[1] << endl;
                }
        }    
    }
    

    keep_window_open("x");
    return 0;
}
