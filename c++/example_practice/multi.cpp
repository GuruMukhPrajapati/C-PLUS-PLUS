#include <iostream>
using namespace std;
class base
 { 
 
protected : 

int a, b;

public:

void ins(int p , int q ){
    a=p;
    b=q;
}


};

class add : public base{
    public :
    void disp_add(){
    cout<<"the addation is : "<< a+b<<endl;
    }

};

class multi: public base{

    public :
    void disp_multi(){
        cout<<"the mutliple is : "<<a*b<<endl;

    }
};

int main (){
    add x;
    multi y;
    x.ins(20,30);
    y.ins(22,200);
    x.disp_add();
    y.disp_multi();

}