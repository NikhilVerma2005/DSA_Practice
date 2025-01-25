#include <iostream>
using namespace std;

int linear_search(int arr[],int index,int val)
{
    if(index==-1)
    {
        return -1;
    }
    if(val == arr[index])
    {
        return index;
    }
    else
    {
        return linear_search(arr,index-1,val);
    }
}
int main()
{
    int arr[] = {23,342,1,12,4,4,53,23,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    int res = linear_search(arr,size-1,target);
    cout<<res;

    return 0;
}