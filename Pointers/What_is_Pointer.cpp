#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    short i = 10, c = 20;
    cout << i << endl;

    short *Pointer = &i;

    cout << &i << endl;
    cout << Pointer << endl;

    Pointer = &c;

    //   int * p = &Pointer;

    cout << &i << endl;
    cout << &c << endl;

    cout << Pointer << endl;

    return 0;
}