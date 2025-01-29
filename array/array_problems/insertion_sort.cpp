#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 1; i < 5; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[i - j])
            {
                swap(arr[i], arr[i - j]);
            }
            if (arr[i - j] < arr[i - j - 1])
            {
                swap(arr[i - j], arr[i - j - 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}