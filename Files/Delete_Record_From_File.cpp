#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
void LoadDataFromFiletoVector(string fileName, vector<string> &vName)
{
    fstream ReaddData;

    ReaddData.open(fileName, ios::in);
    if (ReaddData.is_open())
    {
        string Line;
        while (getline(ReaddData, Line))
        {
            vName.push_back(Line);
        }
        ReaddData.close();
    }
}
void SaveToFile(string Name, vector<string> &vName)
{
    fstream info;

    info.open(Name, ios::out);

    for (auto &i : vName)
    {
        if (i != "")
        {
            info << i;
        }
    }
    info.close();
}

void DeletedFindInVector(string fileName, string find)
{
    vector<string> vName;
    LoadDataFromFiletoVector(fileName, vName);

    for (auto &i : vName)
    {
        if (i == find)
        {
            i = "";
        }
    }
    SaveToFile(fileName, vName);
}

int main(int argc, char const *argv[])
{

    PrintOfCenter("Anas.txt");

    DeletedFindInVector("Anas.txt", "Anas");
    cout << endl;

    PrintOfCenter("Anas.txt");

    return 0;
}