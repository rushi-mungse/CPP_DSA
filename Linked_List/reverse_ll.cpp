#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head, int data)
{
    if (*head == NULL)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        *head = newNode;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = *head;
        *head = newNode;
    }
}

void printNode(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverseNode(Node **head)
{
    Node *curr = *head;
    Node *next = *head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        next = next->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
    return;
}

int main()
{
    Node *head = NULL;
    push(&head, 6);
    push(&head, 16);
    push(&head, 26);
    push(&head, 36);
    push(&head, 46);
    printNode(head);
    reverseNode(&head);
    printNode(head);
    return 0;
}