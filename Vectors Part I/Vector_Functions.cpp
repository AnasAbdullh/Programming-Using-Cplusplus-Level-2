#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    vNumbers.clear();

    cout << vNumbers.front() << endl;
    cout << vNumbers.back() << endl;
    cout << vNumbers.empty() << endl;
    cout << vNumbers.capacity() << endl;
    cout << vNumbers.size() << endl;
    return 0;
}