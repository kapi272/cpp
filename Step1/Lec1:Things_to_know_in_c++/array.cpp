#include <iostream>
using namespace std;
int main() {
    // Declare and initialize an array of integers
    int numbers[5] ;
    
    for(int j = 0; j < 5; j++) {
        cout << "enter the number " << j + 1 << ": ";
        cin >> numbers[j];
    }
    
    // Access and print array elements
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    // Modify an element
    numbers[2] = 96;
    cout << "After modification, numbers[2] = " << numbers[2] << endl;

    return 0;
}