#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void CreatNametxt(string file)
{
    ofstream files;
    files.open(file, ios::app);
    files << "Gmail com \n";
    files.close();
}

void LoadDataFromFiletoVector(string fileName, vector<string> &vName)
{
    fstream ReaddData;
    CreatNametxt(fileName);
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

int main(int argc, char const *argv[])
{
    vector<string> Name;
    LoadDataFromFiletoVector("Anas.txt", Name);

    for (auto &i : Name)
    {
        cout << i << endl;
    }

    return 0;
}