#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream Write;
    Write.open("Anas.txt", ios::out);

    if (Write.is_open())
    {
        for (size_t i = 0; i < 100; i++)
        {
            Write << "Anas\n";
        }

        Write.close();
    }



    return 0;
}