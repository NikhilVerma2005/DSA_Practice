#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subseq(string arr,int index,int s,string temp,vector<string>&ans)
{
    // base condition
    if(index==s)
    {
        ans.push_back(temp);
        return ;
    }
    // if not included
    subseq(arr,index+1,s,temp,ans);
    // if included
    temp.push_back(arr[index]);
    subseq(arr,index+1,s,temp,ans);

}

int main()
{
    string arr = "abc";
    string temp;        // temp string to store element in subset
    vector<string>ans;  // final answer (vector) to store string subsets

    subseq(arr,0,arr.size(),temp,ans);

    //print the arr of subsets of  string
    cout<<"subsets of given set: ";
    cout<<"[";
    for(int i=0;i<ans.size();i++)
    {
        cout<<"{ ";
        cout<<ans[i]<<" ";
        cout<<"}";
    }
    cout<<"]";
    return 0;
}