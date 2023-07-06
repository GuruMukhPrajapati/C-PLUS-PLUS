#include<iostream>
using namespace std;


int sum(int a, int b){
    static int c=0;
    c = c + 1;
    return a*b+c;
    }
int main(){
    int a, b;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The value of sum a and b "<<sum(a,b)<<endl;
    cout<<"The value of sum a and b "<<sum(a,b)<<endl;
    cout<<"The value of sum a and b "<<sum(a,b)<<endl;
    cout<<"The value of sum a and b "<<sum(a,b)<<endl;
    return 0;
}