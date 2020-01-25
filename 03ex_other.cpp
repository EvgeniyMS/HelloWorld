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

    int zero = 0;
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    string number = "";
    while (number[0] != 'x') {
        cin >> number;
        if (number == "zero") 
            cout << zero << endl;
            else if (number == "one")
                cout << one << endl;
                else if (number == "two")
                    cout << two << endl;
                    else if (number == "three")
                        cout << three << endl;
                        else if (number == "four")
                            cout << four << endl;
                            else
                                cout << "Don't know such a number" << endl;
    }

/*    int val1 = 0;
    int val2 = 0; 
    int val3 = 0; 

    string val1 = "";
    string val2 = "";
    string val3 = "";

    cout << "Введите три слова через пробел: ";
    cin >> val1 >> val2 >> val3;
    cout << endl << "Введены: " << val1 << ", " << val2 << " и " << val3 << endl;
    if (val1 >= val2)
        if (val1 >= val3)
            if (val2 >= val3)
                cout << val3 << ", " << val2 << ", " << val1 << endl;
            else
                cout << val2 << ", " << val3 << ", " << val1 << endl;
        else
            cout << val2 << ", " << val1 << ", " << val3 << endl;
    else if (val2 >= val3)
        if (val1 >= val3)
            cout << val3 << ", " << val1 << ", " << val2 << endl;
        else
            cout << val1 << ", " << val3 << ", " << val2 << endl;
    else   
        cout << val1 << ", " << val2 << ", " << val3 << endl;
*/

/*
    double val1 = 0.0;
    double val2 = 0.0; 
   
    cout << "Введите два действительных числа через пробел: ";
    cin >> val1 >> val2;
    cout << endl << "Введены: " << val1 << " и " << val2
        << endl << "Сумма: " << val1+val2
        << endl << "Разность: "<< val1-val2
        << endl << "Произведение: "<< val1*val2
        << endl << "Частное: "<< val1/val2 << endl;
    if (val1 > val2)
        cout << val1 << " больше " << val2 << endl;
    else if (val2 > val1)    
        cout << val1 << " меньше " << val2 << endl;
    else    
        cout << val1 << " равно " << val2 << endl;
*/

/*
    int val1 = 0;
    int val2 = 0; 
   
    cout << "Введите два целых числа через пробел: ";
    cin >> val1 >> val2;
    cout << endl << "Введены: " << val1 << " и " << val2
        << endl << "Сумма: " << val1+val2
        << endl << "Разность: "<< val1-val2
        << endl << "Произведение: "<< val1*val2
        << endl << "Частное: "<< val1/val2 << endl;
    if (val1 > val2)
        cout << val1 << " больше " << val2 << endl;
    else if (val2 > val1)    
        cout << val1 << " меньше " << val2 << endl;
    else    
        cout << val1 << " равно " << val2 << endl;
*/
    keep_window_open("x");
    return 0;
}
