#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // حلقة range-based لتكرار عناصر المصفوفة
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    for (int &num : numbers) {
        num *= 2;
        cout << num << endl;
    }

    for (const int &num : numbers) {
        cout << num << endl ;
    }
    
    cout <<endl;
    
    numbers[0] = 66;
    
    for (int num : numbers) {
        cout << num <<  endl;
    }
    

    
    int array[] = {9,8,7,6,5,4,3,2,1};
    
    for (int i : array) {
    
    cout << i << endl;
    }
    
    for (auto i : array) {
    
    cout << i << endl;
    }
    
    

    return 0;
}