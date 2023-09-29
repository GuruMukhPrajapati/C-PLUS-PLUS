// default argument in function
#include<iostream>
using namespace std;
int a,b,c;
int add(int,int=0,int=0){
    return(a+b+c);
}function_default_argument.cpp

int main()
{
    cout<<"the value of a,b and c "<<endl;
    cin>>a>>b>>c;
    cout<<"the sum is : "<<add(a+b+c)<<endl;
}
