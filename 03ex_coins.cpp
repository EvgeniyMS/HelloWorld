// ����� 03 from ���������� �. 
// "����������������. �������� � �������� � �������������� C++ (2� �������) - 2016"
// ������ ����������

#include "std_lib_facilities.h"
#include <windows.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int one_c_coins_cnt = 0;
    int five_c_coins_cnt = 0;
    int ten_c_coins_cnt = 0;
    int twentyfive_c_coins_cnt = 0;
    int fivty_c_coins_cnt = 0;
    int one_d_coins_cnt = 0;

    cout << "������� � ��� ������������ �����?\n: ";
    cin >> one_c_coins_cnt;
    cout << "\n������� � ��� ������������ �����?\n: ";
    cin >> five_c_coins_cnt;
    cout << "\n������� � ��� �������������� �����?\n: ";
    cin >> ten_c_coins_cnt;
    cout << "\n������� � ��� �������������������� �����?\n: ";
    cin >> twentyfive_c_coins_cnt;
    cout << "\n������� � ��� ������������������ �����?\n: ";
    cin >> fivty_c_coins_cnt;
    cout << "\n������� � ��� �������������� �����?\n: ";
    cin >> one_d_coins_cnt;

    int sum_in_cents = 0;
    sum_in_cents = 
        one_c_coins_cnt 
        + (5 * five_c_coins_cnt) 
        + (10 * ten_c_coins_cnt) 
        + (25 * twentyfive_c_coins_cnt) 
        + (50 * fivty_c_coins_cnt) 
        + (100 * one_d_coins_cnt);

    cout << "����� � ���" << endl
        << "������������ �����: " << one_c_coins_cnt << endl
        << "������������ �����: " << five_c_coins_cnt << endl
        << "�������������� �����: " << ten_c_coins_cnt << endl
        << "�������������������� �����: " << twentyfive_c_coins_cnt << endl
        << "������������������ �����: " << fivty_c_coins_cnt << endl
        << "�������������� �����: " << one_d_coins_cnt << endl
        << endl << "����� ����� ����������: " << sum_in_cents;
        if ((sum_in_cents % 10) == 0 || ((sum_in_cents % 10) > 4 && (sum_in_cents % 10) < 20))
            cout << " ������";      
            else if ((sum_in_cents % 10) == 1)
                cout << " ����";
                else if ((sum_in_cents % 10) < 5)
                    cout << " �����";
        
    cout << endl << (sum_in_cents / 100) << " �������� " << (sum_in_cents % 100) << " ������" << endl;

    keep_window_open("x");
    return 0;
}
