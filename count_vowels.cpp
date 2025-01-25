// How many vowels are there in the string ??

#include <iostream>
using namespace std;

int count = 0;
int vowels(string name,int index)
{
    if(index<0)
    {
        return count;
    }
    if(name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u')
    {
        count++;
    }
    return vowels(name,index-1);
    return count;
}
int main()
{
    string name = "Nishant khangar";
    int size = name.length();
    int res = vowels(name,size-1);
    cout<<res<<endl;
    return 0;
}