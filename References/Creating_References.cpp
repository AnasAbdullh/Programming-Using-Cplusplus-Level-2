#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string Name = "Anas";
    string &Copy = Name;

    cout << &Name << endl;
    cout << &Copy << endl;
    Name = "Gmail";
    cout << Name << endl;
    cout << Copy << endl;

    return 0;
}