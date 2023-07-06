#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// factorial(5) = 5 * factorial(4);
// factorial(5) = 5 * 4 * factorial(3) 
// factorial(5) = 5 * 4 * 3 * factorial(2)
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1)
// factorial(5) = 5 * 4 * 3 * 2 * 1
int main(){ 
int a;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"Enter factorial of a is "<<factorial(a)<<endl;
return 0;
}
