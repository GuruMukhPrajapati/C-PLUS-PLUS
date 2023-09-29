#include <iostream>
using namespace std;
class Number
{
private:
    int a;
    int b;

public:
    Number()
    { // Constructor is required
        a = 5;
        b = -7;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
    void show()
    {
        cout << "Value of a : " << a << endl;
        cout << "Value of b : " << b << endl;
    }
};
int main()
{
    Number x;
    cout << "Before Overloading" << endl;
    x.show();
    -x; // Unary Operator overloading
    cout << "After Overloading" << endl;
    x.show();
    return 0;
}
