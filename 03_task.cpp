
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include <windows.h>
#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// read and write a first name
int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    cout << "Введите имя адресата (нажмите 'Enter'):\n";
    string first_name;    // first_name is a variable of type string
    cin >> first_name;    // read characters into first_name
    cout << "Введите возраст адресата (нажмите 'Enter'):\n";
    int age;    // first_name is a variable of type string
    cin >> age;    // read characters into first_name
    if (age < 1 | age > 100)
        simple_error("ты шутишь? :)");            
    cout << "Введите имя коллеги адресата (нажмите 'Enter'):\n";
    string mate_name;    // 
    cin >> mate_name;    // read characters into_name
    char mate_sex = 0;    // 
    bool done = false;
    while (!done) {
        cout << "Введите 'м' если коллега мужчина и 'ж' если женщина (нажмите 'Enter'):\n";
        cin >> mate_sex;    // read characters into_name
        if (mate_sex == 'м' | mate_sex == 'ж')
            done = true;
        else
            cout << "Вы ввели '" << mate_sex << "'\n"
                << "Допустимы только 'м' или 'ж'. Введите вновь (нажмите 'Enter'):\n";
    }
    cout << "Дорогой " << first_name << ",\n"
        << "Все ли в порядке у Вас?\n"
        << "Давно не было от Вас писем.\n"
        << "Хочу сообщить Вам о своей планирумой поездке в Ваш город.\n"
        << "Слышал недавно отметил " << age << " лет! \nПоздравляю!\n";
        if (age < 9)
            cout << "На следующий год тебе будет уже " << age+1 << " годиков!";    
        else if (age == 17)
            cout << "На следующий год уже сможешь голосовать!";    
        else if (age > 63)
            cout << "Не скучно на пенсии? :)";    
    if (mate_sex == 'м')
        cout << "\nКак поживает " << mate_name << "?\n"
            << "Передавайте ему от меня привет!\n";
    else
        cout << "Как поживает " << mate_name << "?\n"
            << "Передавайте ей от меня привет!\n";
    cout << "\n\nС Уважением,\n\nЕвгений С.";
}

//------------------------------------------------------------------------------
