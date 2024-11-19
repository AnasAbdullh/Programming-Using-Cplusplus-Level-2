#include <iostream>
#include "MyLibrray.h"
using namespace Mylib;
using namespace std;

extern int add(int, int);

int main(int argc, char const *argv[])
{

    cout << add(1, 2);
    return 0;
}
int add(int a, int b)
{

    return a * b;
}