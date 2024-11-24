#include <iostream>
using namespace std;

int main() {
    try {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << num1 << endl;
        cout << num2 << endl;

        // محاولة قسمة عددين
        if (num2 == 0) {
            throw "Division by zero error"; // رمي الاستثناء
        }

        int result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (const char* msv) { // التقاط الاستثناء
        cout << "Error: " << msv << endl;
    }

    // طباعة عدد المعاملات
    // cout << "Number of arguments: " << argc << endl;

    // طباعة كل المعاملات التي تم تمريرها
    /* for (int i = 0; i < argc; i++) {
         cout << "Argument " << i << ": " << argv[i] << endl;*/
    try {
        if (5==5) {
            throw 6;

        }


    } catch(int i ) {

        cout << i << endl;
    }


    return 0;
}