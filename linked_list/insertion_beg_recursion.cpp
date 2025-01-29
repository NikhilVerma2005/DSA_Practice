#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node 
{
    public:
    int data;
    node * next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

node * insertion_at_beg(vector<int>arr,int size,int index,node *prev)
{
    if(index==size)
    {
        return prev;
    }

    node *temp=new node(arr[index]);
    temp->next=prev;
    return insertion_at_beg(arr,size,index+1,temp);
}

int main()
{
    node*head=NULL;
    vector<int>arr={1,2,3,4,5,6};
    head=insertion_at_beg(arr,arr.size(),0,NULL);

    node* ptr=head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

    return 0;
}