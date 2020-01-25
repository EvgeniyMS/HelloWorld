#include <iostream>
#include <string>
 
using namespace std;

void FillOutArray(int _noItems, string &_names[])
{
    int noItems = _noItems;
    for (int i=0; i < noItems; i++) {
        cout << "Enter name #" << i << ": " << endl;
        cin >> _names[i];
    }
}
int main()
{
    int noItems;
    cout << "How many names?: ";
    cin >> noItems;
    string names[noItems];
    if (noItems > 0 && noItems <= 10)
        FillOutArray(noItems, names);
    else {
        cout << "Number of names should be from 1 to 10" << endl;
        return 1;
    }
    int i=0;
    for (i; i < noItems; i++) {
        cout << names[i] << endl;
    }
    return 0;
} 