#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vNumbers;
    vNumbers.push_back(1);
    vNumbers.push_back(2);
    vNumbers.push_back(3);
    vNumbers.push_back(4);
    vNumbers.push_back(5);
    //  vNumbers.clear();
    vNumbers.pop_back();

    cout << vNumbers.size() << endl;
    if (vNumbers.empty() == 1)
        cout << "Anas" << endl;

    return 0;
}