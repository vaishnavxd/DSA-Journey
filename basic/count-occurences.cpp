#include <iostream>
using namespace std;

/*
Q3. Count Occurrences

Given an array and a target number, count how many times
the target appears in the array.

Example:
arr = {2, 5, 2, 7, 2, 9, 5, 2}
target = 2

Output:
4
*/

int main() {
    int arr[8] = {2, 5, 2, 7, 2, 9, 5, 2};
    int targetNum = 2;

    int count = 0;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == targetNum) {
            count++;
        }
    }

    cout << count;

    return 0;
}
