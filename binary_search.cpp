#include <iostream>
using namespace std;

int binary_search(int arr[],int start,int end,int target)
{
    if(start>end)
    {
        return -1;
    }
    
    int mid = start+(end-start)/2; // HAR BAR ESE HI KRA KR BHAI...(shi rhega)
    if(arr[mid]==target)
    {
        return mid;
    }
    else
    {
        if(target>arr[mid])
        {
            return binary_search(arr,mid+1,end,target);
        }
        else
        {
            return binary_search(arr,start,mid-1,target);
        }
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 60;
    int res = binary_search(arr,0,size-1,target);

    cout<<res;

    return 0;
}