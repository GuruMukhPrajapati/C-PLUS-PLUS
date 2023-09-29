#include <iostream>
using namespace std;
int main(){
int a[20],n,pos,nvul;
cout<<"how many element : "<<endl;
cin>>n;
cout<<"enter the elemets :"<<endl;
for(int i =0;i<n;++i){
    cin>>a[i];
}

cout<<"new pos :"<<endl;
cin>>pos;
cout<<"new element :"<<endl;
cin>>nvul;

for(int i=n;i>pos;--i){
    a[i]= a[i-1];
}

   a[pos]=nvul;
   n++;
   cout<<"the reslut is :"<<endl;
   for(int i =0;i<n;++i){
    cout<<a[i]<<" "<<endl;
}
};

//for(int i=n; i>pos ; --i)