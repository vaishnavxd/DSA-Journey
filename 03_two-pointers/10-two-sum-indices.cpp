#include <iostream>
using namespace std;

int main() 
{

    // Q10. Two Sum — Return Indices

    // Given a sorted array and a target value, find two elements
    // whose sum is equal to the target and return their indices.

    // Use the two-pointer approach.

    // Example:
    // arr = {1, 3, 4, 6, 8, 11, 15}
    // target = 14

    // Output:
    // 3 4

    // Explanation:
    // arr[3] + arr[4] = 6 + 8 = 14

    int arr[7]= {1, 3, 4, 6, 8, 11, 15};
    int left = 0;
    int right = 6;
    // for(int i=0;i<7;i++){
    //     if(arr[right]+arr[left]==14){
    //             break;
    //     }
    //     else if(arr[right]+arr[left]<14){
    //         left++;
    //     }
    //     else{
    //         right--;
    //     }
    // }

    while(left<right){
        if(arr[right]+arr[left]==14){
            break;
        }
        else if(arr[right]+arr[left]<14){
            left++;
        }
        else{
            right--;
        }
    }

    cout<<left<<" "<<right;

    // a while loop works more better here

    return 0;
}
