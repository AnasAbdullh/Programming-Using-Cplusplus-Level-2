#include <iostream>
using namespace std;

void Swap(int *Num1, int *Num2)
{
    int Temp;

    Temp = *Num1;
    *Num1 = *Num2;
    *Num2 = Temp;
}

int main(int argc, char const *argv[])
{

    int Num1 = 10, Num2 = 20;

    cout << Num1 << endl;
    cout << Num2 << endl;

    Swap(&Num1, &Num2);

    cout << Num1 << endl;
    cout << Num2 << endl;

    return 0;
}