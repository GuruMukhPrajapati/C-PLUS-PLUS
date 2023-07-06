#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
    

int main(){
int a, b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
int money = 10000;
cout<<"if you are joiner you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year";

    return 0;
}