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
    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        permut(arr, index + 1, ans);
        swap(arr[i], arr[index]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
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

    return 0;
}