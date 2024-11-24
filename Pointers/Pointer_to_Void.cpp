#include <iostream>
using namespace std;
int main()
{

    void *Anas;

    int a = 10;
    float pi = 3.14;

    Anas = &a;

    cout << "The value of a is " << *(int *)Anas << endl;

    Anas = &pi;

    cout << "The value of pi is " << *(float *)Anas << endl;

    cout << "The size of a is " << sizeof(a) << endl;
    cout << *(static_cast<float *>(Anas)) << endl;
}