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

void insertion_beg(node* &head,int value)
{
    if(head == nullptr)
    {
        head = new node(value);
    }
    else
    {
        node* newnode = new node(value);
        newnode->next = head;
        head->prev = newnode;

        head = newnode;
    }
}

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

void insertion_spec(node* &head,int value,int index)
{
    if(index == 0)
    {
        insertion_beg(head,value);
    }
    else
    {
        node* ptr = head;
        int i = 0;
        while(i < index-1)
        {
            ptr = ptr->next;
            i++;
        }

        if(ptr->next == nullptr)
        {
            insertion_end(head,value);
        }

        node* new_node = new node(value);
        new_node->next = ptr->next;
        ptr->next = new_node;
        new_node->prev = ptr;
        new_node->next->prev = new_node;
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

    insertion_spec(head,32,3);

    display(head);

    return 0;
}