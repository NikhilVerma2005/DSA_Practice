#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binary(int n,int index,vector<int>temp,vector<vector<int>>&ans,int one,int zero)
{
    if(index>=n)
    {
        ans.push_back(temp);
        return ;
    }

    // zero turn
    if(zero<one)
    {
        temp.push_back(0);
        binary(n,index+1,temp,ans,one,zero++);
        temp.pop_back();
    }

    // one turn
    temp.push_back(1);
    binary(n,index+1,temp,ans,one++,zero);
    temp.pop_back();

}

int main()
{
    int n=4;
    vector<int>temp(n,0);
    vector<vector<int>>ans;

    binary(n,0,temp,ans,0,0);
    cout<<"before removing:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }    
    cout<<endl<<endl;

    // for(int i=0;i<ans.size();i++)
    // {
    //     int zero=0;
    //     int one=0;
    //     for(int j=0;j<ans[i].size();j++)
    //     {
    //         if(ans[i][j]==1)
    //         {
    //             one++;
    //         }
    //         else{
    //             zero++;
    //         }

    //         if(one<zero)
    //         {
    //             ans.erase(ans.begin()+i);
    //         }
    //     }
    // }
    cout<<"After removing:\n";
    
    for (int i = 0; i < ans.size(); i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    } 


}