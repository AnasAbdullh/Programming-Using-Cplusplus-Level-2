#include <iostream>
#include <vector>
using namespace std;

void ReadNumber(vector<int> &vNumber)
{
    char Answer = 'y';
    int ReadMore = 0;
    while (Answer == 'y')
    {
        cout << "Please Enter a Number : ";
        cin >> ReadMore;
        vNumber.push_back(ReadMore);

        cout << "Do you want again Enter a Number : ";
        cin >> Answer;
    }
}
void PrintNumber(vector<int> &vNumbers)
{
    for (auto &Num : vNumbers)
    {
        cout << Num << " " ;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    vector <int> Number ;
    ReadNumber(Number);
    PrintNumber(Number);
    return 0;
}