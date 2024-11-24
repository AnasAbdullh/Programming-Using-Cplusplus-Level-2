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

    string input;
    cout << "Please enter your name: ";

    // التحقق من صحة المدخلات
    while (true)
    {
        getline(cin, input); // قراءة النص بالكامل
        bool isNumber = false;

        // التحقق إذا كان النص يتكون من أرقام فقط
        for (char c : input)
        {
            if (isdigit(c))
            {
                isNumber = true;
                break;
            }
        }

        if (isNumber)
        { // إذا كان النص يحتوي على أرقام
            cout << "Invalid input! Please enter a valid name (no numbers): ";
        }
        else
        {
            break; // إذا كانت المدخلات صحيحة
        }
    }

    cout << "You entered: " << input << endl;

    return 0;
}
