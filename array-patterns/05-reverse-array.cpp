#include <iostream>
using namespace std;

/*
Q5. Reverse an Array

Reverse the elements of an array in-place.

Example:
arr = {1, 2, 3, 4, 5}

Output:
5 4 3 2 1
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
