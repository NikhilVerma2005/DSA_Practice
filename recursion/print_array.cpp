#include <iostream>
using namespace std;

void print(int arr[],int index)
{
    if(index==-1)
    {
        return ;
    }
    print(arr,index-1);
    cout<<arr[index]<<" ";
}
int main()
{
    int arr[] = {2,1,2,4,4,5,2,345,6,2};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    print(arr,s-1);

    return 0;
}