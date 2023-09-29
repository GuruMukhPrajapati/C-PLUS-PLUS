#include <iostream>
using namespace std;
class A{
private:
int a, b, c;
public :
A(int x, int y){ //Constructor
a = x;
b = y;
c = a + b;
}
void display(){
cout<<"Addition of "<<a<<" and "<<b<<" is "<<c;
}
};
int main(){
A a(5, 6);
a.display();
return 0;
}
