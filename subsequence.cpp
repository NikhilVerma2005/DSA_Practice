#include <iostream>
#include <vector>
using namespace std;

void subseq(int arr[],int index,int s,vector<int>temp,vector<vector<int>>&ans)
{
    // base condition
    if(index==s)
    {
        ans.push_back(temp);
        return ;
    }
    // if included
    temp.push_back(arr[index]);
    subseq(arr,index+1,s,temp,ans);

    // if not included
    temp.pop_back();
    subseq(arr,index+1,s,temp,ans);
}

int main()
{
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int >temp;        // subset (array of elements)
    vector<vector<int>>ans;  // 2d vector for storing the subset

    subseq(arr,0,size,temp,ans);

    //print the arr of subsets
    cout<<"subsets of given set: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
        cout<<"  ";
    }

    return 0;
}