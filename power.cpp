// power of n
#include <iostream>
using namespace std;

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
}
int main()
{
    int n = 2;
    int a = 3;  // 2 ki power 8
    int ans = power(n,a);
    cout<<ans;
}