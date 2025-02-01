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
void insertion_beg(node *&head, int value)
{
    if (head == NULL)
    {
        head = new node(value);
    }
    else
    {
        node *newnode;
        newnode = new node(value);
        newnode->next = head;
        head = newnode;
    }
}
void inser_spec(node *&head, int value, int index)
{
    if (head == NULL)
    {
        head = new node(value);
    }
    else if (index == 0)
    {
        insertion_beg(head, value);
    }
    else
    {
        node *newnode;
        node *ptr = head;
        int i = 0;
        while (i != index - 1)
        {
            ptr = ptr->next;
            i++;
        }
        newnode = new node(value);
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
}
void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    node *head = NULL;
    insertion_beg(head, 32);
    insertion_beg(head, 76);
    insertion_beg(head, 54);

    inser_spec(head, 99, 1);

    display(head);
}