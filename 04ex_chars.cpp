// глава 04 from Страуструп Б. 
// "Программирование. Принципы и практика с использованием C++ (2е издание) - 2016"
// Разные упражнения

#include "std_lib_facilities.h"
#include <windows.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char type ='0';
    while (type != 'x')
    {
        cout << "Для вывода таблицы символов введите 'a' или 'A'" << endl
            << "для вывода таблицы цифр введите 'N'" << endl << ": ";
        cin >> type;
        switch (type)
        {
        case 'a' /* constant-expression */:
            for (int i = 'a'; i <= 'z'; i++)
                cout << "'" << char(i) << "' has numeric code: " << i << endl;
            break;
        
        case 'A' /* constant-expression */:
            for (int i = 'A'; i <= 'Z'; i++)
                cout << "'" << char(i) << "' has numeric code: " << i << endl;
            break;
        
        case 'N' /* constant-expression */:
            for (int i = '0'; i <= '9'; i++)
                cout << "'" << char(i) << "' has numeric code: " << i << endl;
            break;
        
        default:
            cout << "'Допустимы только символы 'a', 'A' или 'N'" << endl;
            break;
        }
    }
    
    keep_window_open("x");
    return 0;
}
