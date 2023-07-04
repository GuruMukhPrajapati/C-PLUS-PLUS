#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b = &a;
    // store the value of &---->(address of) operator
    // that is give you address 
    cout<<"Enter the addresd of a is "<<&a<<endl;
    cout<<"Enter the addresd of a is "<<b<<endl; 

    // *---->(value at ) Dereference operator
    // that is give you value 
    cout<<"The value at address b is "<<*b<<endl;

    // pointer to pointer
    // int** c = &b;
    // cout<<"The address of b is "<<&b<<endl;
    // cout<<"The address of b is "<<c<<endl;
    // cout<<"The value at address c is "<<*c<<endl;
    // cout<<"The value at address value_at(value at)((c)) is "<<**c<<endl;
    return 0;
}