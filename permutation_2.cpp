#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permut(vector<int> arr, int index, vector<vector<int>> &ans)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<bool>use(21,0);  // new vector which tells that which element used in one function call
    for (int i = index; i < arr.size(); i++)
    {
        if(use[arr[i]+10]==0)   // condition is that elements in array would be between (-10 to 10)
        {
            swap(arr[i], arr[index]);
            permut(arr, index + 1, ans);
            swap(arr[i], arr[index]);
            use[arr[i]+10]=1;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 1};
    vector<vector<int>> ans;

    permut(arr, 0, ans);
    cout << "Before : \n";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // sort(ans.begin(), ans.end());
    // auto last = unique(ans.begin(), ans.end());
    // ans.erase(last, ans.end());

    // cout << "After erasing duplicate elements : \n";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}