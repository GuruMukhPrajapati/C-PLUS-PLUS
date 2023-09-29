// hierachial inheritance -->

#include <iostream>
using namespace std;
class base
{

protected:
    int a;
    int b;

public:
    void input_a(int m, int n)
    {
        a = m;
        b = n;
    }
};
class add : public base
{
public:
    void display_add()
    {
        cout << "\n addation is : " << a + b;
    }
};

class multi : public base
{
public:
    void display_multi()
    {
        cout << "\n multiplection is :" << a * b;
    }
};
int main()
{
    add x;
    multi y;
    x.input_a(10, 20);
    y.input_a(20, 30);
    x.display_add();
    y.display_multi();
}