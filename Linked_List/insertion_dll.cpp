// Linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

void push(Node **head_ref, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *(head_ref);
    new_node->prev = NULL;

    if (*(head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void printNode(Node *head_ref)
{
    while (head_ref != NULL)
    {
        cout << head_ref->data << endl;
        head_ref = head_ref->next;
    }
}

void pushAtEnd(Node **head_ref, int data)
{
    Node *temp = *head_ref;
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

int main()
{
    Node *head = new Node();
    push(&head, 90);
    push(&head, 44);
    push(&head, 43);
    push(&head, 45);
    pushAtEnd(&head, 23);
    printNode(head);
    return 0;
}