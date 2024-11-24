#include <iostream>
#include <vector>
using namespace std;
struct strInformations
{
    string FirstName;
    string LastName;
    short Age;
    float Salary;
};

void ReadInformations(vector<strInformations> &vInfo)
{
    strInformations Employee;
    char AddMore = 'y';

    while (AddMore == 'y')
    {
        cout << "FirstName :";
        cin >> Employee.FirstName;

        cout << "LastName :";
        cin >> Employee.LastName;

        cout << "Age :";
        cin >> Employee.Age;

        cout << "Salary :";
        cin >> Employee.Salary;
        vInfo.push_back(Employee);
        cout << "Do you want again Enter Y/N";
        cin >> AddMore;
    }
}
void PrintInformations(vector<strInformations> &Info)
{

    for (auto &count : Info)
    {
        cout << "_________________________" << endl;
        cout << "The FirstName : " << count.FirstName << endl;
        cout << "The LastName : " << count.LastName << endl;
        cout << "The Age : " << count.Age << endl;
        cout << "The Salary :" << count.Salary << endl;
        cout << "_________________________" << endl;
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    vector<strInformations> info;
    ReadInformations(info);
    PrintInformations(info);
    return 0;
}