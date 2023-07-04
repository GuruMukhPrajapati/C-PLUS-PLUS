#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}
int sum(int a, int b , int c){
    return(a+b+c);
}
/*int volume(float a,int r){
    return(3.14*r*r);
}
int area(float l, float b){
    return(l*b);
}*/
int main(){
    cout<<"result of sum --> "<<sum(10,20)<<endl;
    cout<<"result of sum three numbers --> "<<sum(10,20,10)<<endl;
   // cout<<"result of volume --> "<<volume(2,20)<<endl;
    //cout<<"result of area -->"<<area(10,20)<<endl;

}