#include<iostream>
using namespace std;
int main(){

    int year ;
    cout<< "enter the year"<< endl;
    cin>>year;
    if (((year%4)==0) || ((year%400)==0))
    {
        cout<<"thes is leap year " << year<< endl;


    }
    else{
        cout<<"not leap year " << year<<endl;

    }
    return 0;
}