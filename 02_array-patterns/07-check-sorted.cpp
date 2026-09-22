#include <iostream>
using namespace std;

/*
Q7. Check if an Array is Sorted

Given an array, check whether it is sorted in ascending order.

Example:
arr = {1, 2, 3, 4, 7, 9}

Output:
Sorted
*/

int main() {
    int arr[6] = {1, 2, 3, 4, 7, 9};

    bool sorted = true;

    for (int i = 1; i < 6; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted == true) {
        cout << "Sorted";
    }

    if (sorted == false) {
        cout << "Not Sorted";
    }

    return 0;
}
