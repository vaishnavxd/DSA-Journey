#include <iostream>
using namespace std;

/*
Q9. Two Sum in a Sorted Array

Given a sorted array and a target value, find two elements
whose sum is equal to the target.

Use the two-pointer approach.

Example:
arr = {1, 2, 4, 6, 8, 10}
target = 10

Output:
2 8
*/

int main() {
    int arr[6] = {1, 2, 4, 6, 8, 10};
    int target = 10;

    int left = 0;
    int right = 5;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " " << arr[right];
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}
