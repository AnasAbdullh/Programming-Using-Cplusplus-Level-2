#include <iostream>
using namespace std;
void Function1(int x)
{
    x++;
}
int main()
{
    int a = 10;
    Function1(a);
    cout << "\n a after calling function1 = " << a << endl;
    return 0;
}