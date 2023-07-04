
// function overloding calculate area of circle and rectangle with funvtion overloding by -MY SIR G-
#include <iostream>
using namespace std;
int area(int, int);
float area(int);
int main()
{
    int r, l, b;
    cout << "enter the value of r" << endl;
    cin >> r;
    float C = area(r);
    cout << " the area of circle is : " << C << endl;
    cout << "enter the value of l " << endl;
    cin >> l;
    cout << "enter the value of b " << endl;
    cin >> b;
    int A = area(l, b);

    cout << "the area of rectangle is : "<<A << endl;
}
float area (int r){
    return(3.14*r*r);

}
int area(int L, int B ){

    return(L*B);
}