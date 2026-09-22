#include <iostream>
using namespace std;

/*
Q6. Second Smallest Distinct Element

Given an array, find the smallest and second smallest
distinct elements.

Example:
arr = {8, 3, 1, 9, 4, 1, 6}

Output:
Smallest: 1
Second Smallest: 3
*/

int main() {
    int arr[7] = {8, 3, 1, 9, 4, 1, 6};

    int smallNum = arr[0];
    int secSmallnum = 999999;

    for (int i = 0; i < 7; i++) {
        int temp = arr[i];

        if (temp < smallNum) {
            secSmallnum = smallNum;
            smallNum = temp;
        }
        else if (temp > smallNum && temp < secSmallnum) {
            secSmallnum = temp;
        }
    }

    cout << smallNum << endl;
    cout << secSmallnum;

    return 0;
}
