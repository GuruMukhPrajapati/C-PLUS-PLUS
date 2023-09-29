#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the value of a , b, c : "<< endl;
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c)
        cout<<a<<"is big value"<<endl;
        else
        cout<<c<<"is big value"<<endl;
        
    }
    else 
    {
        if (b<c)
        cout<<b<<"is big value"<<endl;
        else
        cout<<c<<"is big value"<<endl;

    }
}

