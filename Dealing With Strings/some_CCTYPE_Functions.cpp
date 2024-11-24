#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    char ch = '_';
    if(isalnum(ch))
        cout << ch<< endl;


    char alpha = '9';
    if (isalpha(alpha)) {
        cout << alpha << " هو حرف." << endl;
    } else {
        cout << alpha << " ليس حرفًا." << endl; // الناتج: 9 ليس حرفًا.
    }

    char digit = '5';
    if (isdigit(digit)) {
        cout << digit << " هو رقم." << endl; // الناتج: 5 هو رقم.
    }

    ch = 'g';
    if (islower(ch)) {
        cout << ch << " هو حرف صغير." << endl; // الناتج: g هو حرف صغير.
    }

    ch = 'G';
    if (isupper(ch)) {
        cout << ch << " هو حرف كبير." << endl; // الناتج: G هو حرف كبير.
    }

    ch = ' ';
    if (isspace(ch)) {
        cout << "الحرف هو مسافة فارغة." << endl; // الناتج: الحرف هو مسافة فارغة.
    }

    ch = '#';
    if (isprint(ch)) {
        cout << ch << " حرف قابل للطباعة." << endl; // الناتج: # حرف قابل للطباعة.
    }

    ch = '!';
    if (ispunct(ch)) {
        cout << ch << " علامة ترقيم." << endl; // الناتج: ! علامة ترقيم.
    }

    ch = 'A';
    cout << "حرف صغير: " << (char)tolower(ch) << endl; // الناتج: حرف صغير: a

    ch = 'b';
    cout << "حرف كبير: " << (char)toupper(ch) << endl; // الناتج: حرف كبير: B

    ch = '\n';
    if (iscntrl(ch)) {
        cout << "الحرف هو حرف تحكم." << endl; // الناتج: الحرف هو حرف تحكم.
    }
    
    
    return 0;
}