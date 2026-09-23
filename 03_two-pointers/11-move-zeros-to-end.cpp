#include <iostream>
using namespace std;

int main()
{
    // Q11. Move All Zeros to the End
    //
    // Given an array of integers, move all 0s to the end
    // while maintaining the relative order of the non-zero elements.
    //
    // The operation must be done in-place.
    //
    // Example:
    // arr = {0, 1, 0, 3, 12}
    //
    // Output:
    // 1 3 12 0 0
    //
    // Requirements:
    // - Use the two-pointer approach
    // - Don't create another array
    // - Maintain the order of non-zero elements

    int arr[5] = {0, 1, 0, 3, 12};

    // Your solution here
    int left = 0;

    for(int i=0;i<5;i++){
      if(arr[i]!=0){
        int temp = arr[left];
        arr[left]=arr[i];
        arr[i]=temp;
        left++;

      }
    }
    
    // Print the array
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}