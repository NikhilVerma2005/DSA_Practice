#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    cout << "size of vector: " << v.size() << endl;
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // sort in increasing order
    sort(v.begin(), v.end());
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    // sort in decreasing order
    // sort(v.begin(),v.end(),greater<int>());
    // for (auto i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout<<endl;

    // binary searching (firstly we have to sort the array like here)
    cout<<binary_search(v.begin(),v.end(),2)<<endl;  // output will be 0 or 1 

    // for finding index

    return 0;
}