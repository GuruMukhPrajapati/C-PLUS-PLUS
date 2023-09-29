#include <iostream>
using namespace std;
class MyClass {
public:
    int a;

    // Parameterized constructor
    MyClass() {
        a=50;
        cout<<"the value of a is : "<<a;
        
            }
};

int main() {
    
    MyClass obj1;
  
    return 0;
}
