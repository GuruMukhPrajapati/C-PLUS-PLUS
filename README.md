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


