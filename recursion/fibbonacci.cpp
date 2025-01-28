// 0,1,1,2,3,5,8,13,21,44
#include <iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n = 8;
    int ans = fib(n);
    cout<<ans;
}