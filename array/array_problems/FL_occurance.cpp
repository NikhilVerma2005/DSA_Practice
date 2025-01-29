#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,4,5,5,9,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==target)
        {
            cout<<"first occucrance is at index "<<i<<endl;
            break;
        }
    }
    int ans;
    for(int i=0;i<s;i++)
    {
        if(target==arr[i])
        {
            ans=i;
        }
    }
    cout<<"last occurance is at index "<<ans<<endl;
}