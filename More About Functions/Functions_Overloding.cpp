#include <iostream>
#include "MyLibrray.h"
using namespace Mylib;
using namespace std;

int MySum(int a, int b)
{
    return a + b;
}
int MySum(int a, int b, int c)
{
    return a + b + c;
}

int MySum(int a, int b, int c, int d)
{
    return a + b + c + d;
}

void Display(int a, double b)
{
    cout << "Integer: " << a << ", Double: " << b << endl;
}

void Display(double b, int a)
{
    cout << "Double: " << b << ", Integer: " << a << endl;
}

int Add(int a, int b = 0, int c = 0)
{
    return a + b + c;
}

int Add(int a, int b)
{
    return a + b;
}

double Add(double a, double b)
{
    return a + b;
}

int Multiply(int a, int b)
{
    return a * b;
}

int Multiply(int a, int b, int c)
{
    return a * b * c;
}

int main(int argc, char const *argv[])
{
    cout << MySum(3, 2) << endl;
    cout << MySum(5, 2, 3) << endl;
    cout << MySum(1, 2, 3, 4) << endl;

    Display(5, 7.5); // استدعاء الدالة الأولى
    Display(7.5, 5); // استدعاء الدالة الثانية

    cout << Add(3);       // 3 + 0 + 0
    cout << Add(3, 4);    // 3 + 4 + 0
    cout << Add(3, 4, 5); // 3 + 4 + 5

    cout << "Add(5, 7): " << Add(5, 7) << endl;         // استدعاء الدالة الأولى
    cout << "Add(5.5, 7.3): " << Add(5.5, 7.3) << endl; // استدعاء الدالة الثانية

    cout << "Multiply(3, 4): " << Multiply(3, 4) << endl;       // استدعاء الدالة الأولى
    cout << "Multiply(3, 4, 5): " << Multiply(3, 4, 5) << endl; // استدعاء الدالة الثانية

    return 0;
}