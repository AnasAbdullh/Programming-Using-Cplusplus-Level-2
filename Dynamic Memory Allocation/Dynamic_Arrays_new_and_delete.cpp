#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    short Numbers;
    cout << "Enter a Number " << endl;
    cin >> Numbers;

    int *p = new int[Numbers];

    cout << "Enter Grade of Students" << endl;

    for (size_t i = 0; i < Numbers; i++)
    {
        cout << "Number " << i + 1 << endl;
        cin >> *(p + i);
    }

    for (size_t Num = 0; Num < Numbers; Num++)
    {
        cout << *(p + Num) << endl;
    }

    return 0;
}