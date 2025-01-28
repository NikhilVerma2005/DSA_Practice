#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start,int end,int mid)
{
    // first create new array for storing sort elements
    vector<int>temp(end-start+1);  // size of temp array in brackets [normal array can also use for this]

    int left = start;
    int right = mid+1;
    int index = 0;  // index for temp array

    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    // Now there is turn of those elements which left rest in any of both sides(left or right)
    
    // if left array is not empty yet
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++;
        left++;
    }
    // if right array is not empty yet
    while(right<=end)
    {
        temp[index]=arr[right];
        index++;
        right++;
    }

    // now paste all elements of temp arr in original array (arr)
    index = 0;
    while(start<=end)
    {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void merge_sort(int arr[],int start,int end)
{
    if(start == end)  // Base condition..
    {
        return ;
    }
    int mid = start+(end-start)/2;
    merge_sort(arr,start,mid);  // for left side array
    merge_sort(arr,mid+1,end);  // for right side array
    // Now merge all 
    merge(arr,start,end,mid);
}

int main()
{
    int arr[] = {12,43,12,5,6,73,1,32,1,124,5,8};
    int s = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,s-1);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}