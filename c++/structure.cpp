#include<iostream>
using namespace std;
union magic
{
    int age;
    float rice;
    char name;
}; 
int main(){
    union magic guru;
    guru.age =34;
    //guru.rice=495.56;
    cout<<"the value of guru age is :"<<guru.age<<endl;
    //cout<<"the value of guru rice is :"<<guru.rice<<endl;
    
}