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

void reverse_ll_data(node *&head)
{
    // take an array vector for storing the values of ll
    cout << "Data in reverse order of ll:\n";
    vector<int> temp;
    node *ptr = head;
    while (ptr)
    {
        temp.push_back(ptr->data);
        ptr = ptr->next;
    }

    // now from last index just insert all array values in ll;
    ptr = head;
    int i = temp.size() - 1;
    while (ptr)
    {
        ptr->data = temp[i];
        ptr = ptr->next;
        i--;
    }
}

int main()
{
    node *head = NULL;
    create_one(head);
    display(head);

    reverse_ll_data(head);
    display(head);

    // Actually we did not reverse the ll, we just reverse the data through this function
}