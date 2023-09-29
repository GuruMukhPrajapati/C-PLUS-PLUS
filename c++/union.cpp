#include<iostream>
using namespace std;

struct guru {
    int age;
    float salary;
    char nm;
};

int main() {
   struct guru emp1;
   emp1.age=65;
   emp1.salary=8989;
   emp1.nm='u';

    cout << "age of employ : " << emp1.age << endl;
    cout << "salary of employ : " << emp1.salary << endl;
    cout << "char of name : " << emp1.nm << endl;

    return 0;
}
