#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFiletoVector(string fileName, vector<string> vName)
{
    fstream ReaddData;

    ReaddData.open(fileName, ios::out);
    //ReaddData.open("vc.txt", ios::out |ios::app);

    if (ReaddData.is_open())
    {
        string Line;
        for (auto &i : vName)
        {
            ReaddData << i << endl;
        }

        ReaddData.close();
    }
}

int main(int argc, char const *argv[])
{
    vector<string> Name = {"Anas", "Ali"};
    LoadDataFromFiletoVector("Anas.txt", Name);

    return 0;
}