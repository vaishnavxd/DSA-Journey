#include <iostream>
using namespace std;

/*
Q2. Minimum Element

Given an array, find and print the smallest element.

Example:
arr = {4, 7, 2, -9, 1, -5}

Output:
-9
*/

int main() {
    int arr[6] = {4, 7, 2, -9, 1, -5};

    int lowestNum = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] < lowestNum) {
            lowestNum = arr[i];
        }
    }

    cout << lowestNum;

    return 0;
}
