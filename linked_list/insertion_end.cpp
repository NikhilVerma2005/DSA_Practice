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
    node *head = NULL;

    // insert elements in end of ll
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *tail = head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->next = new node(arr[i]);
        }
    }

    //print
    node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}