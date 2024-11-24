#include <iostream>
#include <string>
using namespace std;

int main() {

    string txt = "Anas ";
    cout << txt << endl;
    cout << txt.size()<< endl;
    cout << txt.length() << endl;
    cout << txt.empty() << endl;
    txt.append("Abdallah");
    cout << txt << endl;
    txt.insert(7,"Apk");
    cout << txt << endl;
    txt.erase(7,9);
    cout << txt << endl;
    std::string str = "Hello, World!";
    str.replace(7, 5, "Universe"); // استبدال 5 أحرف بدءًا من الفهرس 7 بـ "Universe"
    std::cout << str << std::endl; // Hello, Universe!
    //std::string str = "Hello, World!";


    string S1= "My Name is Anas, I Love Programming.";
    cout << S1.substr(4,7) << endl;

    S1.push_back('X');
    cout << S1 << endl;
//Removes one character from the end of the string
    S1.pop_back();
    cout << S1 << endl;
    cout << txt.find("Anas") << endl;
    cout << txt.find("g") << endl;
    cout << txt << endl;

    if (txt.find("Ahb") == txt.npos) {

        cout << "not sure" << endl;
    }




    return 0;
}