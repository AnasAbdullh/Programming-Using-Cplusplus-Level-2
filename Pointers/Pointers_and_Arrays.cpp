#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int Array[] = {1, 2, 3, 4, 5};
    int *arr = Array;

    cout << arr << endl;
    cout << (arr + 1) << endl;
    cout << arr + 2 << endl;
    cout << arr + 3 << endl;
    cout << arr + 4 << endl;

    cout << endl;

    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *arr + 2 << endl;
    cout << *arr + 3 << endl;
    cout << *arr + 4 << endl;

    cout << endl;

    for (size_t i = 0; i < sizeof(arr); i++)
    {

        cout << *(arr + i) << endl;
    }

    return 0;
}