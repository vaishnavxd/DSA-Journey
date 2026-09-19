#include <iostream>
using namespace std;

/*
Q1. Maximum Element

Given an array, find and print the largest element.

Example:
arr = {4, 7, 2, 9, 1, 5}

Output:
9
*/

int main() {
    int arr[6] = {4, 7, 2, 9, 1, 5};

    int highestNum = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > highestNum) {
            highestNum = arr[i];
        }
    }

    cout << highestNum;

    return 0;
}
