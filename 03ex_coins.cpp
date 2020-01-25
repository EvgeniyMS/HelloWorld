// глава 03 from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"
// Разные упражнения

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

    cout << "Сколько у Вас одноцентовых монет?\n: ";
    cin >> one_c_coins_cnt;
    cout << "\nСколько у Вас пятицентовых монет?\n: ";
    cin >> five_c_coins_cnt;
    cout << "\nСколько у Вас десятицентовых монет?\n: ";
    cin >> ten_c_coins_cnt;
    cout << "\nСколько у Вас двадцатипятицентовых монет?\n: ";
    cin >> twentyfive_c_coins_cnt;
    cout << "\nСколько у Вас пятидесятицентовых монет?\n: ";
    cin >> fivty_c_coins_cnt;
    cout << "\nСколько у Вас однодолларовых монет?\n: ";
    cin >> one_d_coins_cnt;

    int sum_in_cents = 0;
    sum_in_cents = 
        one_c_coins_cnt 
        + (5 * five_c_coins_cnt) 
        + (10 * ten_c_coins_cnt) 
        + (25 * twentyfive_c_coins_cnt) 
        + (50 * fivty_c_coins_cnt) 
        + (100 * one_d_coins_cnt);

    cout << "Итого у Вас" << endl
        << "одноцентовых монет: " << one_c_coins_cnt << endl
        << "пятицентовых монет: " << five_c_coins_cnt << endl
        << "десятицентовых монет: " << ten_c_coins_cnt << endl
        << "двадцатипятицентовых монет: " << twentyfive_c_coins_cnt << endl
        << "пятидесятицентовых монет: " << fivty_c_coins_cnt << endl
        << "однодолларовых монет: " << one_d_coins_cnt << endl
        << endl << "Общая сумма составляет: " << sum_in_cents;
        if ((sum_in_cents % 10) == 0 || ((sum_in_cents % 10) > 4 && (sum_in_cents % 10) < 20))
            cout << " центов";      
            else if ((sum_in_cents % 10) == 1)
                cout << " цент";
                else if ((sum_in_cents % 10) < 5)
                    cout << " цента";
        
    cout << endl << (sum_in_cents / 100) << " долларов " << (sum_in_cents % 100) << " центов" << endl;

    keep_window_open("x");
    return 0;
}
