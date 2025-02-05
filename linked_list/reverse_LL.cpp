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
void linked_list(node *&head) // always pass head by refernce not by value!!
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

void reverse_ll(node *&head)
{
    cout << "Reverse of linked list: \n";

    // previous node,next node(future),current node
    node *curr = head;
    node *prev = NULL;
    node *future;

    while (curr)
    {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    head = prev;
}

int main()
{
    node *head = NULL;
    linked_list(head);
    display(head);

    reverse_ll(head);
    display(head);

    // Actually we did not reverse the ll, we just reverse the data through this function
}