#include <iostream>
#include <string>
using namespace std;

int Paint(int x, int y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    short Number;
    // cin >> Number;
    string name = "Anas";
    string Nmae = "gamil";

    // cout << ((Number >= 3) ? 33 : 44) << endl;
    //  short result = (Number <= 10) ? 33 : 44;
    //  cout << result << endl;

    // (Number >= 4) ? cout << "Anas" : cout << "Gmail";
    // ((Number >= 3) ? name : Nmae);
    // int result = (Number % 2 == 0) ? 100 : 200;
    // cout << result << endl;

    string userType = "admin";
    string message = (userType == "admin") ? "Welcome Admin!" : "Welcome User!";
    cout << message << endl;

    int temperature = 30;
    string status = (temperature > 25) ? "Hot" : "Cold";
    cout << "The weather is " << status << endl;

    // int x = 10, y = 20;
    // int max = (x > y) ? x : y;
    // cout << "The maximum value is " << max << endl;

    int score = 55;
    cout << ((score >= 90) ? "Excellent" : (score >= 60) ? "Good"
                                                         : "Poor")
         << endl;

    // int a = 10, b = 15;
    // string result = (a == b) ? "Equal" : "Not Equal";
    // cout << result << endl;

    // int a = 20, b = 10;
    // int sum = (a > b) ? (a - b) : (a + b);
    // cout << "Result: " << sum << endl;

    int array[5] = {10, 20, 30, 40, 50};
    int index = 2;
    int value = (index < 5) ? array[index] : -1;
    cout << "Value: " << value << endl;

    bool isSunny = false;
    string weather = isSunny ? "Sunny Day" : "Cloudy Day";
    cout << weather << endl;

    int a = 10, b = 20;
    int &larger = (a > b) ? a : b;
    larger += 10; // قم بزيادة المتغير الأكبر بمقدار 10
    cout << "a: " << a << ", b: " << b << endl;

    string username;
    cout << "Hello, " << (username.empty() ? "Guest" : username) << endl;

    int salary = 3000;
    cout << "Your bonus is: " << (salary > 2000 ? "500" : "200") << " USD" << endl;

    int grade = 50;
    cout << ((grade >= 50) ? "Pass" : "Feild") << endl;

    int x = 10, y = 20;

    cout << ((x > y) ? x : y) << endl;


    int c = 10 ;
    cout << ((c > 5) ? to_string(Paint(grade , salary)) : "nothing") << endl;

    int z = 10;
    int v = 20 ;

    cout <<((z >= 10) ?((v > 2) ? "True" : "false") : "Flase") << endl;
    short Num ;
    cin >> Num;

    cout << ((Num >= 0) ? "Positive" : "Negative ") << endl;
    cout << ((Num == 0) ? "Zero" : ((Num >= 0) ? "Positive" : "Negative ")) << endl;

    return 0;
}