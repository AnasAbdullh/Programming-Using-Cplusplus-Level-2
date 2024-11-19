#include <iostream>
using namespace std;

// int Factorial(int n)
// {
//     if (n == 1 || n == 0) // Base Case
//         return 1;
//     return n * Factorial(n - 1); // Recursive Case
// }

int Fibonacci(int n)
{
    if (n == 0) // Base Case 1
        return 0;
    if (n == 1) // Base Case 2
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2); // Recursive Case
}

int main()
{
    //   cout << "Factorial of 5: " << Factorial(5) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << Fibonacci(i) << " ";
    }

    return 0;
}
