#include <iostream>
using namespace std;

/*
Q4. Second Largest Element

Given an array, find the largest and second largest elements.

Example:
arr = {10, 5, 8, 20, 15, 3}

Output:
Second Largest: 15
Largest: 20
*/

int main() {
    int arr[6] = {10, 5, 8, 20, 15, 3};

    int large = arr[0];
    int secondLarge = arr[0];

    for (int i = 1; i < 6; i++) {
        int num = arr[i];

        if (num > large) {
            secondLarge = large;
            large = num;
        }
        else if (num > secondLarge) {
            secondLarge = num;
        }
    }

    cout << secondLarge << endl;
    cout << large;

    return 0;
}
