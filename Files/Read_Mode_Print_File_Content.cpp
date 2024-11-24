#include <iostream>
#include <fstream>
using namespace std;

void PrintOfCenter(string NameFile)
{
    fstream File;
    File.open(NameFile, ios::in);

    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
        {
            cout << Line << endl;
        }
        File.close();
    }
}

int main(int argc, char const *argv[])
{
    PrintOfCenter("Anas.txt");

    fstream File;
    File.open("NonExistentFile.txt", ios::in);

    if (!File.is_open())
    {
        cout << "Failed to open file." << endl;
    }

    // محاولة قراءة أو كتابة بعد الخطأ ستفشل دون clear
    File.clear(); // مسح حالة الخطأ
    File.open("ValidFile.txt", ios::in);
    if (File.is_open())
    {
        cout << "Successfully opened ValidFile.txt" << endl;
    }
    File.close();
    return 0;
}