#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string Name = "Anas";
    string *Pointer = &Name;
    string g = "A";
    *Pointer = g;

    cout << Name << endl;
    cout << Pointer << endl;
    cout << &Name << endl;
    cout << *Pointer << endl;

    Name = "Gmail";
    cout << endl;

    cout << Name << endl;
    cout << Pointer << endl;
    cout << &Name << endl;
    cout << *Pointer << endl;

    *Pointer = "Saleh";

    cout << endl;

    cout << Name << endl;
    cout << Pointer << endl;
    cout << &Name << endl;
    cout << *Pointer << endl;

    //  *Pointer = 0x7ffd4abf6b20;

    cout << endl;

    cout << Name << endl;
    cout << Pointer << endl;
    cout << &Name << endl;
    cout << *Pointer << endl;

    // Pointer = 0x7ffd4abf6b33;

    return 0;
}