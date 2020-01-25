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

    vector<string> words;
    for (string temp; cin >> temp;)
    {
        words.push_back(temp);
    }
    cout << "Всего слов - " << words.size() << endl;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == "two")
            words[i] = "NOT_TWO";
        cout << words[i] << endl;
    }
    
    
    /*
    vector<int> v= {1,2,3,4,5};
    cout << "i++ version" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    cout << "++i version" << endl;
    for (int i = 0; i < v.size(); ++i)
    cout << v[i] << endl;

    cout << "iint i : v version" << endl;
    for (int i : v)
    cout << i << endl;
*/
    keep_window_open("x");
    return 0;
}
