#include <iostream>
using namespace std;

int min(int a[], int s,int start)
{
    int min_index=start;
    int i;
    for (i = start; i < 5; i++)
    {
        if (a[i] < a[min_index])
        {
            min_index = i;
        }
    }
    return min_index;
}
int main()
{
    int arr[5] = {2, 4, 1, 8, 3};
    int i = 0;
    while (i != 4)
    {
        int min_index;
        for(int j=i+1;j<5;j++)
        {
            min_index=min(arr,5,j);
            if(arr[i]>arr[min_index])
            {
              swap(arr[i],arr[min_index]);
            }
        }
        i++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}