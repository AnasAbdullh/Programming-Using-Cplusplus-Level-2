#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int Numbers = 10;
    int &Ref = Numbers;

    cout << Numbers << endl;
    cout << Ref << endl;
    cout << &Ref << endl;

    Ref = 33;
    int b = 55;
    cout << Numbers << endl;
    cout << Ref << endl;
    cout << &Ref << endl;

    Ref = b;

    int *P = &Ref;
    cout << P << endl;
    cout << *P << endl;
    P = &Ref;

    cout << &P << endl;

    // int a = 10;
    // int &x = a;
    // cout << &a << endl;
    // cout << &x << endl;
    // cout << a << endl;
    // cout << x << endl;
    // int *p = &a;
    // cout << p << endl;
    // cout << *p << endl;
    // int b = 20;
    // p = &b;
    // cout << p << endl;
    // cout << *p << endl;

    return 0;
}