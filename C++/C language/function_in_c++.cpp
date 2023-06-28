#include<iostream>
using namespace std;
// function prototype

/*-------int sum(int a, int b);------* we can write this line---*/
int sum(int, int);
void g(void);
int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
//formal parameter a and will be taking values from actual parameter num1 and num2*------> 
int c =a+b;
return c;
}
// formal function are define in parameters*------>

void g(){
    cout<<"Hello--World ";
}