#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void create_one(node *&head) // always pass head by refernce not by value!!
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < arr.size(); i++)
    {
        node *temp;
        temp = new node(arr[i]);
        temp->next = head;
        head = temp;
    }
}

void display(node *head)
{
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

node* reverse_ll(node *curr,node*prev)
{
    if(curr==NULL)
    {
        return prev;
    }
    node*fut=curr->next;
    curr->next=prev;
    return reverse_ll(fut,curr);
}

int main()
{
    node *head = NULL;
    create_one(head);
    display(head);
    node*prev=NULL;
    head= reverse_ll(head,prev);
    display(head);

    // Actually we did not reverse the ll, we just reverse the data through this function
}