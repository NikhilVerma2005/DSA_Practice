#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "size of vector : " << v.size()<<endl;
    cout << "capactity of vector : " << v.capacity()<<endl;

    vector<int>v1(6,5);
    cout << "size of vector v1 : " << v1.size()<<endl;
    cout << "capactity of vector v1 : " << v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    vector<int>v2={1,2,3,4,5,6,7};
    cout<<endl<<"size of v2 : "<<v2.size()<<endl;
    return 0;
}