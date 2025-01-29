#include <iostream>
using namespace std;
int peak_element(int arr[], int size)
{
    int low = 0; // low equal to zero index
    int high = size-1;
    int mid;
    while (low < high)
    {
        mid = high+(low-high)/2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            // increasing slop of mountain
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,7,6,3,1};
    int s = sizeof(arr) / sizeof(arr[0]);
    // we will use binary search
    int peak = peak_element(arr, s);
    cout << "peak element is "<<arr[peak]<<" at index "<<peak<< endl;
    
    // Time complexity is O(logn)  (bianry search)
    // Space complexity is O(1)
    return 0;
}