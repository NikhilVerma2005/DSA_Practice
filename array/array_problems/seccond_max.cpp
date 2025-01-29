#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<s;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;

    // second max
    int smax=arr[0];
    for(int i=0;i<s;i++)
    {
        if(arr[i]!=max)
        {
            if(smax<arr[i])
            {
                smax=arr[i];
            }
        }
    }
    cout<<smax;
    return 0;
}