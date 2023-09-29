#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
    }
};

int main() {
    MyClass obj; // Creating an object of MyClass
    return 0;
}
