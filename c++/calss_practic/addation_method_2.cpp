#include<iostream>
using namespace std;
class Max{

        private: 
        int a,b,c;

        public:
        void input(){
            cout<<"enter the value of a and b : "<<endl;
            cin>>a>>b;
            c=a+b;
            cout<<"the result is : "<<c;
            
        }

};

        int main ()     {

        Max x;
        x.input();
        return 0;
        
        };
