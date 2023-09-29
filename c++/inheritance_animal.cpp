// single inheritance program example -->

#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Woof woof!" << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();
    dog.bark();
    return 0;
}
