#include <iostream>
using namespace std;

int sum(int arr[],int index)
{
    if(index==-1)
    {
        return 0;
    }
    return arr[index]+sum(arr,index-1);
}
int main()
{
    int arr[] = {2,1,2,4,4,5,2,3,6,2};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,s-1); 
}