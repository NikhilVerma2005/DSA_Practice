#include <iostream>
using namespace std;
int main()
{
    int arr[4]={3,6,11,7};
    int speed=1;
    int ans=0;
    while(ans<=8)
    {
        for(int i=0;i<4;i++)
        {
            if(arr[i]%speed!=0)
            {
                ans=(arr[i]/speed)+1;
                arr[i]=0;
            }
            ans=ans+(arr[i]/speed);
        }
        speed++;
    }
    cout<<speed;
}