#include <iostream>
using namespace std;

int sum(int n)
{
    if(n<=1)
    {
        return n;
    }
    return n+sum(n-1);
}
int main()
{
    int n = 10;
    int ans = sum(n);
    cout<<ans;
}