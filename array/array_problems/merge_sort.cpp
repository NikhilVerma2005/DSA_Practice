#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start,int end,int mid)
{
    // create a temp array for storing the merge elements
    vector<int>temp(end-start+1);
    int left = start;
    int right = mid+1;

    int index=0; // index for temp array
    
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            left++;
            index++;
        }
        else
        {
            temp[index]=arr[right];
            right++;
            index++;
        }
    }

    // left side k rh gye vo...
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++;
        left++;
    }
    while(right<=end)
    {
        temp[index]=arr[right];
        index++;
        right++;
    }

    // now put elements in array from temp
    // int i=0;
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        index++;
        start++;
    }

}

void merge_sort(int arr[],int end,int start)
{
    if(start>=end)
    {
        return ;
    }
    int mid = start+(end-start)/2;
    merge_sort(arr,mid,start);
    merge_sort(arr,end,mid+1);

    merge(arr,start,end,mid);
}

int main()
{
    int arr[] = {3,2,324,4552,32,122,34,21,3,45,89};
    int s = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,s,0);

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}