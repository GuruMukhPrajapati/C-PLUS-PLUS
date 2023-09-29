#include<iostream>
using namespace std;
class Max {

    private :
    int a,b,c;

    public : 
    void intput (){
         cout << "Enter the value of a and b: " << endl;
        cin >> a >> b;
    }
    void diplay(){
         c = a + b;
        cout << "The result is: " << c << endl;
    }

};

int main(){

    Max x;
    x.intput();
    x.diplay();
    
}