#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y; // number of items,coupon price,discount
        cin>>n>>x>>y;
        int total_sum=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i]; // items buy
            total_sum+=arr[i];
        }
        int dsum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=y)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=arr[i]-y;
            }
            dsum=dsum+arr[i];
        }
        if(total_sum>(dsum+x))
        {
            cout<<"COUPON\n";
        }
        else
        {
            cout<<"NO COUPON\n";
        }
    }
    return 0;
}