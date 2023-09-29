#include <iostream>
using namespace std;
class Max
{
private:
   int a;

public:
   int b;
   void input()
   {
      a = 100;
   }
   void display()
   {

      cout << "a = : " << a << endl;
   }
};

class Min : public Max
{
private:
   int c;

public:
   int d;

   void insert()
   {
      input();
      b = 200;
      c = 300;
      d = 400;
   }

   void show()
   {
      display();
      cout << "b = :" << b << endl;
      cout << "c = :" << c << endl;
      cout << "d = :" << d << endl;
   }
};

int main()
{
   Min x;
   x.insert();
   x.show();
}
