#include <iostream>
using namespace std;

int gcd(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    // Euclid Algorithm to find GCD (greatest common divisor)
    return gcd(n2,n1%n2);
}
int main()
{
    int a = 42;
    int b = 24;
    int ans = gcd(a,b);
    cout<<ans;

    return 0;
}