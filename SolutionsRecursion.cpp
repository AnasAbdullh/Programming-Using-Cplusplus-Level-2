#include <iostream>
using namespace std;

int Power(int base, int M)
{
    if (M == 0)
    {
        return 1;
    }
    else
    {
        return (base * Power(base, M - 1));
    }
}

int main(int argc, char const *argv[])
{

    cout << Power(5, 2) << endl;

    return 0;
}