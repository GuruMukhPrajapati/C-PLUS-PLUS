<p align="center"><h2>C PLUS PULS</h2></p>

                                                  
           .:^^::.                                
        :7JYYYYYYY^     ...         ...           
       ~YYYJ~^^^!!     .JY7        .JY7           
      :YYYY:        :^:^YY?::^. :^:^YY?::^.       
      ^YYYJ         ?YYYYYYYYY! ?YYYYYYYYY!       
      .JYYY~     .  ...:Y5?.... ...:Y5?....       
       ^JYYY?777?J.    .7?!        .7?!           
        .^7?JJJJ?7.                               
                                                  

![White Minimalist Photography Channel Youtube Intro (3)](https://github.com/GuruMukhPrajapati/C-PLUS-PLUS/assets/117162170/b2369218-7342-4dcb-8a92-b7d1bfb0c6ea)

## Authors <img src="https://github.com/GuruMukhPrajapati/C-PLUS-PLUS/assets/117162170/ad46c3da-03b0-4c9e-88c3-e00c85c74ae5" alt="Logo" width="30px">

- [@GuruMukhPrajapati](https://github.com/GuruMukhPrajapati)

# WHAT YOU GET FORM THIS GITHUB [![Awesome](https://awesome.re/badge-flat.svg)](https://github.com/sindresorhus/awesome)  

- ALL BASIC CODE OF C++ 
- WITH OUTPUT 
- FOR EDUCATION PORPUSE ONLY 

## CODES <img src="https://github.com/GuruMukhPrajapati/C-PLUS-PLUS/assets/117162170/a6b1ea77-bd57-4503-89d2-070cc240a1c5" alt="Logo" width="30px">




## first c++ program
CODE 
```bash
 #include <iostream>
 using namespace std;
int main()
{
    cout<< "Hello World";
    return 0;
}
```
OUTPUT 
```bash
Hello  World 
```



# LOOPS 
- For loop 
- While loop 
- do while 

### `for loop`

- SYNTEX 
```bash 
for (initialise counter; test counter; increment / decrement counter)
{
    //set of statements
}
```
- EXAMPLE 
```cpp
#include <iostream>
using namespace std;
 
int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++)
    {
        cout << i << " ";
    }
    return 0;
}

```
- OUTPUT
```bash 
Output :
0 1 2 3 4 5 6 7 8 9
```

### `while loop` 
- SYNTEX 

```cpp
while (condition test)
{
    // Set of statements
}

```
- EXAMPLE
```cpp
#include <iostream>
 using namespace std;
int main() {
    int n,i=1;
    cout << "Enter a number: ";
    cin >> n;
    
    while (i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}
```
 - OUTPUT
```bash 
Output : // n= 5;
Enter a number: 6
1 2 3 4 5 6 
```
### `do while `

- SYNTEX 
```cpp
do
{
    statements;
} while (test condition);
```
- EXAMPLE 
```cpp 
#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "Enter the range of numbers: ";
    cin >> n;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}
```
- Output 
```bash
Output : // n=5;
Enter the range of numbers: 5
1
2
3
4
5
```
# FUNCTION

### `sum of two number using function` 

- CODE
``` bash
#include<iostream>
using namespace std;
int sum(int a ,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"enter the first value"<<endl;
    cin>>num1;
    cout<<"enter the second value"<<endl;
    cin>>num2;
    cout<<"the result is : 56"<<sum(num1,num2)<<endl;    
    return 0;

} 
```
- OUTPUT
```bash
enter the first value
56
enter the second value
10
the result is : 66
```

### `function calling `
- CODE WITH EXPANATION
```bash
  #include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
```
- OUTPUT
```bash

The value of x is 4 and the value of y is 5
The value of x is 5 and the value of y is 4
```
### `fuction overloding`
- CODE
```bash
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
```
- OUTPUT
```bash
result of sum --> 30
result of sum three numbers --> 40
```


