#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    if (a > b)
    {
        cout <<"the "<< a <<" is big"<<endl;
    }
    else
    {
        cout <<"the "<< b <<" is big"<<endl;
        
    }
    return 0; // if return 0; is not written don't worry about the output it will be same
}