#include <iostream>
using namespace std;

bool checkpal(string name,int end,int start)
{
    if(start>=end)
    {
        return 1;
    }
    if(name[start]!=name[end])
    {
        return 0;
    }
    return checkpal(name,end-1,start+1);
}
int main()
{
    string name = "naman";
    int size = name.length();
    int res = checkpal(name,size-1,0);

    if(res==1)
    {
        cout<<"This is palindrome\n";
    }
    else
    {
        cout<<"Not palindrome\n";
    }
    return 0;
}