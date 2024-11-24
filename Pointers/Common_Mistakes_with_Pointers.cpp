#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int u = 4;
    //   int *p = u;

    // int u = 4;
    int *p = &u;

    // p = 56;
    *p = 56;

    int n = *(p + 6);

    cout << n << endl;

    // int *c = p;
    // cout << c << endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // int *p = arr;
    // int value = *(p + 6); // Out-of-bounds access

    // cout << value << endl;

    return 0;
}