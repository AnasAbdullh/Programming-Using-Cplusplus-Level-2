#include <iostream>
#include <vector>
using namespace std;
struct vVector_of_Structure
{
    string Name;
    short Age;
    float Size;
};

int main(int argc, char const *argv[])
{

    vector<vVector_of_Structure> vPerson;

    vVector_of_Structure Info;

    Info.Name = "Anas";
    Info.Age = 20;
    Info.Size = 170.2;
    vPerson.push_back(Info);

    Info.Name = "Ali";
    Info.Age = 21;
    Info.Size = 174.5;
    vPerson.push_back(Info);

    Info.Name = "Mohammed";
    Info.Age = 22;
    Info.Size = 160.76;
    vPerson.push_back(Info);

    for (auto &Print : vPerson)
    {
        cout << Print.Name << endl;
        cout << Print.Age << endl;
        cout << Print.Size << endl;
        cout << endl;
    }

    return 0;
}