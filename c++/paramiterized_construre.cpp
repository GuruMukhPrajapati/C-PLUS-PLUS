#include <iostream>
using namespace std;
class MyClass {
public:
    int a;

    // Parameterized constructor
    MyClass(int x) {
        a = x;
    }
};

int main() {
    
    MyClass obj1(42);
    cout << "value of a is : " << obj1.a;

    return 0;
}
