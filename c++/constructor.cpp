#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int x , int y){
            a=x;
            b=y;
    }
    complex(int k){
    a=k;
    }
    complex(){
        a=0;b=0;
    }
    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};
int main(){
    complex a1(23,89);
    a1.display();
}
//jjoere
/*
djsj
kd*/