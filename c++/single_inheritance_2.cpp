#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class
class Child : public Parent {
};

int main() {
int main() {
    Child obj;
    obj.display(); // Calls the display() method of the Parent class
    return 0;
}
    