#include<iostream>
using namespace std;
class Max
        {
            public:
            int a,b,c;


};
int main(){
            Max x;
            cout<<"enter the value of a and b : "<<endl;
            cin>>x.a>>x.b;
            x.c=x.a+x.b;
            cout<<"the result is "<<x.c;

};