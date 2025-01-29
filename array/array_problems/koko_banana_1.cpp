#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 6, 11, 7};  // Array initialization
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    int ans = 0;
    int i;

    for (i = 1; i <= n; i++) {  // Loop through each element, starting from the second one (index 1)
        if (arr[i-1] % i != 0) {  // If the element is not divisible by the index
            ans = ans + (arr[i-1] / i) + 1;  // Add the ceiling value of the division
        } else {
            ans = ans + (arr[i-1] / i);  // Add the result of the division
        }
        if (ans == 8) {  // If the sum reaches 8
            break;  // Exit the loop
        }
    }
    
    cout << i << " ";  // Output the current index (which is the number of iterations)
    return 0;
}
