#include<iostream>
using namespace std;

// this one line code is function prototype 
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 

int main(){
    int num1,num2;
    cout<<"enter the first value"<<endl;
    cin>>num1;
    cout<<"enter the second value"<<endl;
    cin>>num2;
    cout<<"the result is : "<<sum(num1,num2)<<endl;    
    return 0;
    // num1 and num2 are actual parameters

}
int sum(int a,  int b){
    int c=a+b;
    return c;
}
// Formal Parameters a and b will be taking values from actual parameters num1 and num2.