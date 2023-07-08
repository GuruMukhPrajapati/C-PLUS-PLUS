#include<iostream>
using namespace std;

    int sum(int a, int b){
        cout<<"   "<<endl;
        cout<<"using function with 2 argument"<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<<"   "<<endl;
        cout<<"using function with 3 argument"<<endl;
        return a+b+c;
    }
// using function in program**********//
    int main(){
    cout<<"Enter the value of sum 3 and 6 is "<<endl<<sum(3,6)<<endl;
    cout<<"Enter the value of sum 3,8,3 and 3 is "<<endl<<sum(3,8,3)<<endl;
    return 0;


}

