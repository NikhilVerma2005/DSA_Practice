#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int brr[size];
    // for(int i=0;i<size;i++)
    // {
    //     brr[i]=arr[size-1-i];
    // }
    // for(int i=0;i<size;i++)
    // {
    //     cout<<brr[i]<<" ";
    // }

    // by swaping the number of indexes:
    int i=0;
    int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}