#include <iostream>
using namespace std;
class p;
class o; 
class o{
    int data;
    public:
    void setdata(int a){
        data=a;
    }
    friend void add(o,p);
};

class p{
    int data ;
    public :
    void setdata(int b){
        data= b;
    }
 friend void add(o,p);
};
void add(o a1,p b1){
    cout<<"the sum of object give me the result : "<<a1.data+b1.data<<endl;
}
int main(){
    o x;
    x.setdata(3);    
    p y; 
    y.setdata(5);
    add(x,y);
}
