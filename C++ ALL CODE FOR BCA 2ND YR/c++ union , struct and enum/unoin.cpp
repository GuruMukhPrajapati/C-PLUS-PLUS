#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
};

union money
{
    /* data */
    int rice;
    char car;
    float pound;
};


int main(){
    employee coder;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car; 

    return 0;
}