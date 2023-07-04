// DEFAULT ARGUMET IN FUNCTION *BY MY SIR G*

#include<iostream>
using namespace std; 
int add(int ,int=0,int=0);
int a, b,c;
int main(){
cout<<"enter the value of a,b and c "<<endl;
cin>>a>>b>>c;
cout<<"the sum of a+b+c is "<< add(a+b+c)<<endl;
}
int add(int x , int y, int z ){
    return(x+y+z);
}