#include <iostream>
using namespace std;

// This will not swap a and b
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
/*
call by reference using pointer''''''
   void swapPointer(int* a, int* b){
          int temp = *a;
          *a = *b;
        *b = temp;
 }

*/

// // call by reference using C++ reference variable ''''''
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p = 4, q = 6;
    // cout<<"The value of 4 and 6 is "<<sum(a,b);
    cout << "The value of p is " << p << " The value of q is " << q << endl;
    // swappointer(&p, &q); // swap a and b using pointer reference'''
    //   swapPointer(&p, &q);

    // swapReference(p, q); // swap a and b using reference variable'''
    swapReferenceVar(p, q);
    cout << "The value of p is " << p << " The value of q is " << q << endl;

    return 0;
}

// code by mansi
