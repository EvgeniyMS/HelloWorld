
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
    
    cout << "������� ��� �������� (������� 'Enter'):\n";
    string first_name;    // first_name is a variable of type string
    cin >> first_name;    // read characters into first_name
    cout << "������� ������� �������� (������� 'Enter'):\n";
    int age;    // first_name is a variable of type string
    cin >> age;    // read characters into first_name
    if (age < 1 | age > 100)
        simple_error("�� ������? :)");            
    cout << "������� ��� ������� �������� (������� 'Enter'):\n";
    string mate_name;    // 
    cin >> mate_name;    // read characters into_name
    char mate_sex = 0;    // 
    bool done = false;
    while (!done) {
        cout << "������� '�' ���� ������� ������� � '�' ���� ������� (������� 'Enter'):\n";
        cin >> mate_sex;    // read characters into_name
        if (mate_sex == '�' | mate_sex == '�')
            done = true;
        else
            cout << "�� ����� '" << mate_sex << "'\n"
                << "��������� ������ '�' ��� '�'. ������� ����� (������� 'Enter'):\n";
    }
    cout << "������� " << first_name << ",\n"
        << "��� �� � ������� � ���?\n"
        << "����� �� ���� �� ��� �����.\n"
        << "���� �������� ��� � ����� ���������� ������� � ��� �����.\n"
        << "������ ������� ������� " << age << " ���! \n����������!\n";
        if (age < 9)
            cout << "�� ��������� ��� ���� ����� ��� " << age+1 << " �������!";    
        else if (age == 17)
            cout << "�� ��������� ��� ��� ������� ����������!";    
        else if (age > 63)
            cout << "�� ������ �� ������? :)";    
    if (mate_sex == '�')
        cout << "\n��� �������� " << mate_name << "?\n"
            << "����������� ��� �� ���� ������!\n";
    else
        cout << "��� �������� " << mate_name << "?\n"
            << "����������� �� �� ���� ������!\n";
    cout << "\n\n� ���������,\n\n������� �.";
}

//------------------------------------------------------------------------------
