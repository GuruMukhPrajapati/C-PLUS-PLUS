#include<iostream>
using namespace std;
class MyClass {
 public:
  int myNum;
  void printNum() {
    cout << myNum << endl;
  }
};

int main() {
  // Create an object of the MyClass class.
  MyClass myObj;

  // Set the value of the myNum data member.
  myObj.myNum = 10;

  // Call the printNum() member function.
  myObj.printNum();

  return 0;
}
