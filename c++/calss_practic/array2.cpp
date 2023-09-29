#include <iostream>
using namespace std;
int main()
{

    int m1[2][2];
    int m2[2][2];
    int r1[2][2] = {{
                        0,
                        0,
                    },
                    {0, 0}};
    cout << "enter the vule for first matrix : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "enter the row " << i + 1 << "the column" << j + 1 << endl;
            cin >> m1[i][j];
        }
    }

    cout << "enter the vule for second matrix : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "enter the row " << i + 1 << "the column" << j + 1 << endl;
            cin >> m2[i][j];
        }
    }
for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for(int k =0; k<2; k++){
                    r1[i][j]=m1[i][k]*m2[k][j];
            }
        }
    }


cout<<"the multiple is :"<<endl;
for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<r1[i][j]<<" "<<endl;
        }
    }
};