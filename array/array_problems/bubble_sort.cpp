#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 4, 6, 2, 3};
    int n = 5;

    for (int i = 0; i < n - 1; i++)  // Outer loop runs n-1 times
    {
        bool swapped = false;  // To check if any swap is made
        for (int j = 0; j < n - i - 1; j++)  // Reduce range in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;  // Record that a swap was made
            }
        }
        if (!swapped)  // If no swaps, array is sorted
            break;
    }

    // Printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
