#include <iostream>
#include <random>
using namespace std;

int main() {
    // Написати програму, що копіює елементи 2-х масивів розміром 5
    // елементів кожен в один масив розміром 10 елементів таким чином:
    // спочатку копіюються послідовно всі елементи, більші за 0,
    // потім послідовно всі елементи, що дорівнюють 0,
    // а потім послідовно всі елементи менші за 0.
    srand(time(0));

    const int SIZE = 5;
    int arrFirst[SIZE] = {};
    int arrSecond[SIZE] = {};

    const int commonSIZE = 10;
    int arrCommon[commonSIZE] = {};


    int minValue = -2, maxValue = 3;

    // generate number and add in arrays
    for (int i = 0; i < SIZE; i++) {
        arrFirst[i] = rand() % (maxValue - minValue) + minValue;
        arrSecond[i] = rand() % (maxValue - minValue) + minValue;
    }

    // print arrays
    for (int i = 0; i < SIZE; i++) {
        cout << arrFirst[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arrSecond[i] << " ";
    }

    for (int i = 0, j = 0; i < 1; i++) {
        // cycles for check in each array in turn
        // check and add numbers > 0 in common array
        for (int i = 0; i < SIZE; i++) {
            if (arrFirst[i] > 0) {
                arrCommon[j++] = arrFirst[i];
            }
        }
        for (int i = 0; i < SIZE; i++) {
            if (arrSecond[i] > 0) {
                arrCommon[j++] = arrSecond[i];
            }
        }

        // check and add numbers = 0 in common array
        for (int i = 0; i < SIZE; i++) {
            if (arrFirst[i] == 0) {
                arrCommon[j++] = arrFirst[i];
            }
        }
        for (int i = 0; i < SIZE; i++) {
            if (arrSecond[i] == 0) {
                arrCommon[j++] = arrSecond[i];
            }
        }

        // check and add numbers < 0 in common array
        for (int i = 0; i < SIZE; i++) {
            if (arrFirst[i] < 0) {
                arrCommon[j++] = arrFirst[i];
            }
        }
        for (int i = 0; i < SIZE; i++) {
            if (arrSecond[i] < 0) {
                arrCommon[j++] = arrSecond[i];
            }
        }
    }

    cout << endl;

    for (int i = 0; i < sizeof(arrCommon) / sizeof(arrCommon[0]); i++) {
        cout << arrCommon[i] << " ";
    }

    return 0;

}
