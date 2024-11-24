#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
    string Name;
    short Age;
    float Salary;
};

// دالة لقراءة المعلومات من المستخدم
vector<stEmployee> ReadInformations()
{
    vector<stEmployee> Employee; // لتخزين الموظفين
    stEmployee Informations;     // لتخزين بيانات موظف مؤقتة
    char Answer = 'y';

    while (Answer == 'y' || Answer == 'Y')
    {
        cout << "Enter employee information:\n";

        cout << "Name: ";
        cin >> Informations.Name;

        cout << "Age: ";
        cin >> Informations.Age;

        cout << "Salary: ";
        cin >> Informations.Salary;

        Employee.push_back(Informations); // إضافة الموظف إلى القائمة

        cout << "Do you want to add another employee? (y/n): ";
        cin >> Answer;
    }

    return Employee;
}

// دالة لطباعة المعلومات
void PrintInformations(const vector<stEmployee> &info)
{
    cout << "\nEmployee Information:\n";
    for (const auto &About : info)
    {
        cout << "Name: " << About.Name << endl;
        cout << "Age: " << About.Age << endl;
        cout << "Salary: " << About.Salary << endl;
        cout << "---------------------\n";
    }
}

int main()
{
    // استدعاء دالة القراءة والطباعة
    vector<stEmployee> EmployeeList = ReadInformations();
    PrintInformations(EmployeeList);

    return 0;
}
