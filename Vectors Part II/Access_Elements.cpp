#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> Numbers = {1, 2, 3, 4, 5};

    cout << Numbers.at(0) << endl;
    cout << Numbers.at(1) << endl;
    cout << Numbers.at(2) << endl;
    cout << Numbers.at(3) << endl;
    cout << Numbers.at(4) << endl;

    cout << Numbers[0] << endl;
    cout << Numbers[1] << endl;
    cout << Numbers[2] << endl;
    cout << Numbers[3] << endl;
    cout << Numbers[4] << endl;

    return 0;
}