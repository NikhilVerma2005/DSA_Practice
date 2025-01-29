#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={3,5,8,2,1};
    bool swapped=0;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}