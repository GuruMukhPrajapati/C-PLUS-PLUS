#include <iostream>
using namespace std;
int main()
{
    int a[50], pos, n, newv;
    cout << "hoe many elemet :" << endl;
    cin >> n;
    cout << "enter the elemet of array" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << "what pos :" << endl;
    cin >> pos;
    cout << "what element :" << endl;
    cin >> newv;

    for (int i = n; i > pos; --i)
    {
        a[i] = a[i - 1];
    }
    a[pos] = newv;
    n++;
    cout << "the final array is :" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " " << endl;
    }
};
