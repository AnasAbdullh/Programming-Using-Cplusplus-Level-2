#include <iostream>
using namespace std;

void static PrintNumber()
{
    static int Number = 0;
    cout << Number << endl;
    Number++;
}

int main(int argc, char const *argv[])
{
    const int g = 9;

    PrintNumber();
    PrintNumber();
    PrintNumber();

    return 0;
}