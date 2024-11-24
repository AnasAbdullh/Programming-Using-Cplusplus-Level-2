#include <iostream>
using namespace std;
int main() {

    int *X ;
    int *Y ;

    int i;
    int z;

    X = new int ;
    Y = new int;

    *X = 59;
    *Y = 50;

    cout << *X << endl;
    cout << *Y << endl;

    delete Y;
    delete X;

    cout << *X << endl;
    cout << *Y << endl;

    cin >> i;
    cin >>z;

    *X = i;
    *Y=z;

    cout << *X << endl;
    cout << *Y << endl;

    delete Y;
    delete X;


    X = new int ;
    Y = new int;

}