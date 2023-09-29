#include <iostream>
using namespace std;

int main()
{

    int m1[2][2];
    int m2[2][2];
    int r[2][2] = {{0, 0}, {0, 0}};

    cout << "enter the value in 2x2 matrix " << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "enter the value of row " << i + 1 << "enter value of the column " << j + 1 << endl;
            cin >> m1[i][j];
        }
    }
    cout << "enter the value in 2x2 matrix " << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "enter the value of row " << i + 1 << "enter value of the column " << j + 1 << endl;
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {

                r[i][j] = m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "the matrix is :" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << r[i][j]<<" ";
                }
                cout<<endl;
    }
};