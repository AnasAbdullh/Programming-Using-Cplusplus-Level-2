#include <iostream>
#include <map>
#include <string>
using namespace std;

void Test()
{
    auto Name = "Anas";
    auto Age = 20;
    auto Bool = true;

    cout << Name << Age << Bool << endl;
}

int main(int argc, char const *argv[])
{

    Test();

    map<string, string> StudentGrade = {
        {"Anas", "Excellent"},
        {"Layla", "Good"},
        {"Salem", "Fair"}};

    cout << "Using copy (no &):" << endl;
    for (auto pair : StudentGrade)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\nUsing reference (&):" << endl;
    for (auto &pair : StudentGrade)
    {
        pair.second += " (updated)";
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\nFinal map after reference loop:" << endl;
    for (const auto &pair : StudentGrade)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}