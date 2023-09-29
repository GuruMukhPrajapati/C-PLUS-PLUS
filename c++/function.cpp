#include<iostream>
using namespace std;
int sum(int a ,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"enter the first value"<<endl;
    cin>>num1;
    cout<<"enter the second value"<<endl;
    cin>>num2;
    cout<<"the result is : "<<sum(num1,num2)<<endl;    
    return 0;

}