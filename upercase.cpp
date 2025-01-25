#include <iostream>
using namespace std;

void upercase(string &name,int index)
{
    if(index==-1)
    {
        return;
    }
    name[index] = name[index] -('a'-'A');  // (32) // We can also use inbuilt function (toupper).
    upercase(name,index-1);
}
int main()
{
    string name = "nikhil";
    int size = name.length();
    upercase(name,size-1);
    cout<<name;
    return 0;
}