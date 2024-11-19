#include <iostream>

using namespace std;

// short i = 0;
// short result = 1;

void DownNumbers(int a, int b)
{

    if (a >= b)
    {

        cout << a << endl;

        DownNumbers(a - 1, b);
    }
}

int CalculatePower(int N, int M, int i = 0, int result = 1)
{
    if (i == M)
    {
        return result;
    }

    i++;
    result *= N;
    return CalculatePower(N, M, i + 1, result *= N);
}

int main(int argc, char const *argv[])
{

    //  DownNumbers(10, 1);
    cout << CalculatePower(5, 2) << endl;

    return 0;
}