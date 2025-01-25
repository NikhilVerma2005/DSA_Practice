#include <iostream>
using namespace std;

int least(int arr[], int index)
{
    if (index == 0)
    {
        return arr[0];
    }
    return min(arr[index], least(arr, index - 1));
}
int main()
{
    int arr[] = {2, 2, 4, 4, 5, 2, 3, 6, 2};
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << least(arr, s - 1) << endl;
}