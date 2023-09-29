#include <iostream>
using namespace std;

int main() {
    int a[5], n;

    cout << "How many elements: ";
    cin >> n;

    if (n <= 5) {
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << "The array is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    } 
    return 0;
}
