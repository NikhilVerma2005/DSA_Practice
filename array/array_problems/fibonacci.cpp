#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=0;
    int j=1;
    int count=0;;
    int sum;
    while(count<n-2)
    {
        sum=i+j;
        i=j;
        j=sum;
        count++;
    }
    cout<<n<<"th fibonacci number is "<<sum<<endl;
    return 0;
}