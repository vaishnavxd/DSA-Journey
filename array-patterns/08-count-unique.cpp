#include <iostream>
using namespace std;

/*
Q8. Count Unique Elements

Given a sorted array, count the number of unique elements.

Example:
arr = {1, 1, 2, 2, 3, 3, 4, 5}

Output:
5
*/

int main() {
    int arr[8] = {1, 1, 2, 2, 3, 3, 4, 5};

    int uniqueElem = 1;

    for (int i = 0; i < 7; i++) {
        if (arr[i] != arr[i + 1]) {
            uniqueElem++;
        }
    }

    cout << uniqueElem;

    return 0;
}
