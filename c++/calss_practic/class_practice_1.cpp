#include<iostream>
using namespace std;
class student {

      private :
      int a,b;
      public :
      void input();
      void display();
};

void student :: input(){

  a=20;
  b=20;

}

void student :: display(){

   cout<<a<<endl;
   cout<<b<<endl;
}
int main (){

   student x;
   x.input();
   x.display();


};