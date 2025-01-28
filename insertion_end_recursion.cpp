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

// insert array elements at end in ll through recursion
node *insertion_at_end(vector<int> arr, int index, int size)
{
    // base condition
    if (index == size)
    {
        return NULL;
    }

    node *temp = new node(arr[index]);
    temp->next = insertion_at_end(arr, index + 1, size);
    return temp;
}

int main()
{
    node *head;
    head = NULL;
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    head = insertion_at_end(arr, 0, arr.size());

    // print
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}