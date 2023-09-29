#include <iostream>
using namespace std;
class number{
    private:
    int a,b;
    public:
        void setdata(int x, int y)
        {
            a=x;
            b=y;
        }
        void getdata(){
            cout<< "the sum of a and b is"<< a+b<<endl; 
        
        }

};
int main()
{
    number n1;
    n1.setdata(50,5);
    n1.getdata();
}