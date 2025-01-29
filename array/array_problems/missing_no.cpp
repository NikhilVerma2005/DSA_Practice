#include <iostream>
using namespace std;
int main()
{
    int s=7;
    int arr[s]={1,2,7,4,6,5};  // may be in any order
    int sum=0;
    int actual_sum=(s*(s+1)/2);
    for(int i=0;i<s;i++)
    {
        sum+=arr[i];
    }
    cout<<(actual_sum-sum)<<" is missing "<<endl;
    return 0;
}