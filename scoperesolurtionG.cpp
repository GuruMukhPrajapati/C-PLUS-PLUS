# include<iostream>
using namespace std;
int c = 45;
int main(){
    int a,b,c;
    cout<<"Enter the value is a:"<<endl;
    cin>>a;
    cout<<"Enter the value is b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"Enter the value is "<<c<<endl;
    cout<<"The golbal c is "<<::c;

    return 0;
}