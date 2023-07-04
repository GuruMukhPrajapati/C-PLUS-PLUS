#include<iostream>
using namespace std;

int main(){
    int marks[] = {34, 67, 45, 49, 88};
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    

    int Mathmarks[5];
    Mathmarks[0] = 345;
    Mathmarks[1] = 769;
    Mathmarks[2] = 897; 
    Mathmarks[3] = 456;
    Mathmarks[4] = 365;
cout<<"that is Mathmarks"<<endl;
    cout<<Mathmarks[0]<<endl;
    cout<<Mathmarks[1]<<endl;
    cout<<Mathmarks[2]<<endl;
    cout<<Mathmarks[3]<<endl;
    cout<<Mathmarks[4]<<endl;
    

    //*****************using for loop in array*****************//
    
    for (int i = 0; i < 5; i++)
    {
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    



    return 0;
}