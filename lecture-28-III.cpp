#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};

void printnode(node* nd)
{
    cout << "value: " << nd->data;
    cout << ", address: " << nd << endl;
}

void printlinkedist(node* head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty!!" << endl;
        return;
    }

    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << "-->";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    node* head = NULL;

    printlinkedist(head);

    node* node1 = new node(5);
    head = node1;
    printlinkedist(head);

    node* node2 = new node(7);
    node1->next = node2;
    printlinkedist(head);

    node* node3 = new node(8);
    node2->next = node3;
    printlinkedist(head);

    // Don't forget to free the allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
