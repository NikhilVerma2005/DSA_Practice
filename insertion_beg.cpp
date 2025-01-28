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

int main()
{
    // node created dynamically
    node *head;
    head = NULL; // head = new node(any_value)

    // insert all these array elements in begning of the linked list
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *newnode = new node(arr[i]);
            newnode->next = head;
            head = newnode;
        }
    }
    // print all elements
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}