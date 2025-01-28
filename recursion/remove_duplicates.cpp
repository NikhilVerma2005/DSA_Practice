#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// removing duplicate elements from a vector
int main()
{
    vector<int> arr = {1, 2, 2, 3, 1, 4, 5, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end()); // last is a pointer
    arr.erase(last, arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    // cout<<endl<<*last<<endl;
    // printf("%p\n",last);
}