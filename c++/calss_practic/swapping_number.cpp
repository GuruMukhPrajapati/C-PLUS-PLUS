#include<iostream>
using namespace std;

    class Max {

    private :
    int a,b,c;

    public : 
    void display(int x ,int y){
        a=x;
        b=y;

    }
    void input(){
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the value of a and b before swipping" <<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"the value of a and b before swipping" <<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    }
    
};
int main(){
    Max w;
    w.display(10,20);
    w.input();
}