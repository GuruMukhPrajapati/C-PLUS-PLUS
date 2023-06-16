#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you can not give the exams"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the exam"<<endl;
    }
    else{
        cout<<"you can come to the exams"<<endl;
 }
    return 0;
}
