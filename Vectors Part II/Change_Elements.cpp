#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> Numbers = {10, 20, 30, 40, 50};

    for (const auto &i : Numbers)
    {
        cout << i << endl;
    }

    for (auto &i : Numbers)
    {
        i = 20;
        cout << i << endl;
    }

    Numbers.at(2) = 100;
    Numbers[3] = 44;

    for (auto &i : Numbers)
    {
        cout << endl;
        cout << i << endl;
    }

    return 0;
}