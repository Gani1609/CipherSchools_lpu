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
    cout << "Value: " << nd->data << ", Address: " << nd->next << endl;
}

void printlinkedlist(node* head)
{
    node* current = head;
    while (current != NULL)
    {
        printnode(current);
        current = current->next;
    }
}

int main()
{
    node* node1 = new node(5);
    node* node2 = new node(7);
    node* node3 = new node(8);

    node1->next = node2;
    node2->next = node3;

    printlinkedlist(node1);

    // Remember to free the allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}


