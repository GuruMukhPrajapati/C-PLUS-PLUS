#include<iostream>
using namespace std;
class robin
{
    private :
        int a,b,c ; 
    public:
    int x,y;
   void setdata(int a1, int b1 , int c1); // function hai ye es se class jo ki private h ac ess hoti h 
    void getdata(){
        cout<<"the value of x is : "<<x<<endl;
        cout<<"the value of y is : "<<y<<endl;
        cout<<"the value of c is : "<<c<<endl;
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
     
    }
     
};
void robin :: setdata(int a1, int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){
robin ram;
ram.x = 65;
ram.y=55;
ram.setdata(1,3,3);
ram.getdata();

    

}