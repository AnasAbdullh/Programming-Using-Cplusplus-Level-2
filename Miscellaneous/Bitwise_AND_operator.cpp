#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    cout << "Result : " << (12 & 25);
    cout << (33 & 5) << endl;

    /*  short number ;
      cin >> number;

      if (number & 1) {
          cout << "Odd" << endl;
      } else {
          cout << "Even" << endl;

      }
    */
    int number = 16;
    if ((number & 3) == 0)
    {
        cout << "The number is divisible by 4." << endl;
    }
    else
    {
        cout << "The number is not divisible by 4." << endl;
    }

    cout << "Binary: " << bitset<8>(number) << endl; // 8 تعني عرض 8 بتات. عدل حسب الحاجة
}