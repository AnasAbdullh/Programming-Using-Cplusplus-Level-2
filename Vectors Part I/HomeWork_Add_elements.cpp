#include <iostream>
#include <vector>
using namespace std;

vector<int> ReadArray()
{

    static vector<int> Number;
    short Num;
    cout << "Please Enter Number :";
    cin >> Num;
    Number.push_back(Num);

    char Answer = 'y';

    cout << "\nDo you want Again Enter a Number ";
    cin >> Answer;

    if (Answer == 'y')
    {
        ReadArray();
    }

    return Number;
}

void PrintArray()
{
    vector<int> revrecArray = ReadArray();

    for (auto &Array : revrecArray)
    {
        cout << Array << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    PrintArray();

    return 0;
}