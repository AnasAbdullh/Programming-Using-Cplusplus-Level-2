#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> numbers = {89, 20, 30, 40, 50};
    numbers.push_back(10); // إضافة العنصر 10

    // الوصول إلى أول عنصر
    cout << "First element: " << numbers[0] << endl;

    // الوصول إلى آخر عنصر
    cout << "Last element: " << numbers[numbers.size() - 1] << endl;

    // Adding elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Displaying elements
    cout << "Vector elements: ";
    for (int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Removing last element
    numbers.pop_back();

    // Displaying elements after removal
    cout << "After pop_back: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}