#include <iostream>
using namespace std;

struct strPointers_and_Structure
{
    string Name;
    short Age;
};

int main(int argc, char const *argv[])
{

    strPointers_and_Structure Info, *P;

    Info.Name = "Anas";
    Info.Age = 20;

    cout << Info.Name << endl;
    cout << Info.Age << endl;

    P = &Info;

    cout << P->Name << endl;
    cout << P->Age << endl;

    return 0;
}