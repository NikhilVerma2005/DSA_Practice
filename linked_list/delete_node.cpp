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

void delete_beg(node *&head)
{
    if (head->next == NULL)
    {
        node *temp = head;
        head = NULL;
        delete (temp);
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete (temp);
    }
}

void delete_end(node *&head)
{
    if (head->next == NULL)
    {
        node *temp = head;
        head = head->next;
        delete (temp);
    }
    else
    {
        node *ptr = head;
        node *prev = head;
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        delete (ptr);
    }
}

void insert_end(int value, node *&head)
{
    if (head == NULL)
    {
        head = new node(value);
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        node *newnode = new node(value);
        ptr->next = newnode;
    }
}

void delete_spec(node *&head, int index)
{
    if (index == 0)
    {
        delete_beg(head);
    }
    else
    {
        node *ptr = head;
        node *prev = head;
        int i = 0;
        while (i != index)
        {
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        prev->next = ptr->next;
        delete (ptr);
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
int main()
{
    node *head = NULL;
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < arr.size(); i++)
    {
        insert_end(arr[i], head);
    }

    display(head);
    delete_beg(head);
    display(head);
    delete_end(head);
    display(head);
    delete_spec(head, 2);
    display(head);
}