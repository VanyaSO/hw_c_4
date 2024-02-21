#include <iostream>
using namespace std;

// Стиснути (зсунути елементи) масиву, видаливши з нього всі 0,
// і заповнити елементи, що звільнилися праворуч, значеннями -1
int main() {

    int arr[] = {1, 2, 3, 1, 4, 0, 5, 6, 0, 7};
    const int SIZE = sizeof(arr) / sizeof(arr[0]);

    int zeroIndex = 0; // Save index for last number not zero

    // Print array
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < SIZE; i++) {
    // check number
        if (arr[i] != 0) {
            // if number = 0 write in start array and increase zeroIndex
            arr[zeroIndex++] = arr[i];
        }
    }

    // change number zeroIndex from  to -1
    for (; zeroIndex < SIZE; zeroIndex++) {
        arr[zeroIndex] = -1;
    }

    cout << endl;

    // Print array
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}


