
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream test;

    // فتح الملف في وضع الكتابة
    test.open("Exapmle.txt", ios::out | ios::app);
    if (test.is_open())
    {
        test << "Anas\n";
        test.close(); // إغلاق الملف
    }

    // إعادة فتح الملف للكتابة مرة أخرى
    test.open("Exapmle.txt", ios::app ); // فتح الملف بوضع الإلحاق (append)
    if (test.is_open())
    {
        test << "Ahmed"; // الكتابة في نهاية الملف دون حذف المحتوى السابق
        test.close();    // إغلاق الملف
    }

    return 0;
}
