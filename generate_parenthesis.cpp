#include <iostream>
#include <vector>
using namespace std;

void parenthesis(int n, int l, int r, string &temp, vector<string> &ans)
{
    // base condition
    if (l + r == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    // left parenthesis
    if (l < n)
    {
        temp.push_back('(');
        parenthesis(n, l + 1, r, temp, ans);
        temp.pop_back();
    }
    // right parenthesis
    if (r < l)
    {
        temp.push_back(')');
        parenthesis(n, l, r + 1, temp, ans);
        temp.pop_back();
    }
}

int main()
{
    int n = 2;
    string temp;
    vector<string> ans;
    parenthesis(n, 0, 0, temp, ans);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;   // Dry run this algo in notebook for betteer understanding 
}