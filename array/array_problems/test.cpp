#include <iostream>
#include </home/nikhil/C++ Programing/array_problems/sort.h>
using namespace std;
int main()
{
    int arr[]={3,5,2,1,4,5,2};
    sort(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}