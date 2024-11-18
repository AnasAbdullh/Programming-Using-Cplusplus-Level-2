#include <iostream>
using namespace std;
int main()
{
    cout << "Result:" << (12 | 25);
    cout << "\n"
         << endl;
    int status = 0b0010;      // تعني أن البت الثاني مفعّل
    status = status | 0b0100; // نريد تفعيل البت الثالث باستخدام OR
    cout << status << endl;
}