#include<iostream>
using namespace std;

int main() {
    int num[] = {56, 55, 99, 87};
    int marks[4];
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    cout << num[3] << endl;

    marks[0] = 56;
    marks[1] = 566;
    marks[2] = 82;
    marks[3] = 99;

    /*
    cout << "the value of marks" << endl;
    cout << marks[0] << endl;
    marks[1] = 100;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    */

    // using for loop
    for (int i = 0; i < 4; i++) {
        cout << num[i] << " this is by using for loop" << endl;
    }

    // using while loop
    int i = 0;
    while (i < 4) {
        cout << "this value is printed by while loop " << num[i] << endl;
        i++;
    }

    // using do-while loop
    i = 0; // Initialize i to 0
    do {
        cout << "this value is printed by do-while loop " << num[i] << endl;
        i++;
    } while (i < 4);

    return 0;
}
