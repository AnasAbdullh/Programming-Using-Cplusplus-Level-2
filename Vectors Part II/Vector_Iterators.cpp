#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector <int> Numbers = {10,20,30,40,50};
    vector <int>::iterator iter;

    for(iter = Numbers.begin() ; iter !=Numbers.end(); iter++) {

        cout << *iter << endl;
    }

    return 0;
}