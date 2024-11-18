#include <iostream>
#include "MyLibrray.h"
using namespace Mylib;
using namespace std;

int ReadNumbers()
{
    int Number = 0;

    cout << "\nPlease Enter a number " << endl;
    cin >> Number;

    while (cin.fail())
    {

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one:" << endl;
        cin >> Number;
    }
    return Number;
}

int main(int argc, char const *argv[])
{

    cout << "Your Number is:" << ReadNumbers();

    return 0;
}
