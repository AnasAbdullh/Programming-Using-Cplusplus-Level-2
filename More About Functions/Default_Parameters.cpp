#include <iostream>
#include "MyLibrray.h"
using namespace Mylib;
using namespace std;

void greet(string name = "Guest")
{
    cout << "Hello, " << name << "!" << endl;
}
void example(int b, int a = 10)
{
    cout << "exapmle" << endl;
}
void Name(int a = 5);

int calculateArea(int Length, int width = 0)
{
    if (width == 0)
        return Length * Length;
    return Length * width;
}

int main(int argc, char const *argv[])
{

    greet();
    greet("Anas");
    example(2, 3);
    Name(10);

    cout << "Area of Square: " << calculateArea(5) << endl;
    cout << "Area of rectangle :" << calculateArea(5, 10) << endl;

    return 0;
}
void Name(int a)
{
    cout << a << endl;
}