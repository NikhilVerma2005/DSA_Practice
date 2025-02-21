#include<iostream>
#include<vector>
#include"/home/nikhil/cpp_programing/linked_list/linked_list.h"
using namespace std;

int main()
{
    node* head=nullptr;
    vector<int>arr={2,12,233,1,1,2,12};
    for(int i=0;i<arr.size();i++)
    {
        create_ll(head,arr[i]);
    }
    display_ll(head);
}