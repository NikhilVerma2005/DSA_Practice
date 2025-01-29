// https://www.youtube.com/watch?v=ThCyc5GcuRQ&list=PLQEaRBV9gAFsj0vi1VtpwqSeEfoIG_KSv&index=11
#include <iostream>
using namespace std;

int sort(int arr[],int n)  // Bubble sorting
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr[n];
}
int solution(int arr[],int n,int cow)
{
    arr[n]=sort(arr,n);
    int start=arr[0];
    int end=arr[n-1]-arr[0];
    int mid,ans;
    int count=1;
    int pos=arr[0];
    while(start<=end)
    {
        mid=(start+end)/2;
        for(int i=1;i<n;i++)
        {
            if(pos+mid<=arr[i])
            {
                count++;
                pos=arr[i];
            }
        }
        if(count<cow)
        {
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return mid;
}
int main()
{
    int arr[]={10,1,2,7,5};
    int cow=3; // no. of cow
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=solution(arr,size,cow);
    cout<<ans;
}