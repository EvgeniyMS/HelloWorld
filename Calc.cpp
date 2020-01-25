#include <iostream>
using namespace std;

int main()
{
    char myOperation = ' ';
    int a,b;

    cout << "Operation? {+ _ * /}: ";
    cin >> myOperation;
    cout << "First number to sum: ";
    cin >> a;
    cout << "Second number to sum: ";
    cin >> b;

    
    int result = 0;
    switch (myOperation)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            break;
    }

//    int c = a + b;
    cout << "Result = " << result << endl;
    return 0;
}