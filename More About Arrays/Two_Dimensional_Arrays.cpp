#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int Multiple[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    };

    for (int i = 0; i <= 9; i++)
    {

        for (int c = 0; c <= 9; c++)
        {

            int results = Multiple[i][c] * (i + 1);

            printf(" %0*d", 2, results);
        }
        cout << endl;
    }
    //  cout << Multiple[0][0]  * 1 << endl;

    int Students[3][4] = {{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12}};

    int x[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << Students[2][1] << " ";
        }
        cout << endl;
    }

    int Multiple[10][10];

    for (int f = 0; f <= 9; f++)
    {

        for (int g = 0; g <= 9; g++)
        {

            Multiple[f][g] = (f + 1) * (g + 1);
        }
    }

    for (int i = 0; i <= 9; i++)
    {

        for (int c = 0; c <= 9; c++)
        {

            printf(" %0*d", 2, Multiple[i][c]);
        }
        cout << endl;
    }
    //  cout << Multiple[0][0]  * 1 << endl;

    return 0;
}
