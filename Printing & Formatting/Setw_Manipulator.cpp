#include <iostream>
#include <iomanip> // this library stores the std::setw
using namespace std;

int main()
{
    // Print the table header
    cout << "---------|---------------------------------|---------|" << endl;
    cout << " Code    | Name                            |Mark     |" << endl;
    cout << "---------|---------------------------------|---------|" << endl;

    // Print the data rows
    cout << setw(9) << "C101" << "| " << setw(32) << "Introduction to Programming 1" << "| " << setw(8) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "| " << setw(32) << "Computer Hardware" << "| " << setw(8) << "88" << "|" << endl;
    cout << setw(9) << "C1035243" << "| " << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;

    // Print the table footer
    cout << "---------|---------------------------------|---------|" << endl;

    cout << setw(23) << "Anas" << endl;

    return 0;
}
