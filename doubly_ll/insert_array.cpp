#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        data = value;
        next=nullptr;
        prev=nullptr;
    }

     
};

void insertion_end(node* &head,int value)
{
    if(head==nullptr)
    {
        head = new node(value);
    }
    else
    {
        node* ptr = head;
        while(ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        node* temp = new node(value);
        ptr->next = temp;
        temp->prev = ptr;

        temp->next = nullptr;
    }
}

void display(node * &head)
{
    node* ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    node* head = nullptr;
    vector<int>arr = {1,2,3,4,5,6,7};
    for(int i=0;i<arr.size();i++)
    {
        insertion_end(head,arr[i]);
    }
    display(head);

    return 0;
}