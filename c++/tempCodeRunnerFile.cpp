#include <iostream>
#include <string.h>
using namespace std;
union Employee {
int emp_id;
char emp_name[30];
float salary;
}info;
int main(){
info.emp_id = 34;
strcpy( info.emp_name, "Raj Biradar");
info.salary = 20000.00;
cout<<"Employee id is : "<<info.emp_id<<endl;
cout<<"Employee name is : "<<info.emp_name<<endl;
cout<<"Employee salary is : "<<info.salary<<endl;
return 0;
}