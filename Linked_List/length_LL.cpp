#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int data)
{
    if (*head_ref == NULL)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        *head_ref = newNode;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = *head_ref;
        *head_ref = newNode;
    }
}

void length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    cout << "length of LL is : " << count << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 49);
    push(&head, 4);
    push(&head, 59);
    push(&head, 56);
    push(&head, 56);
    length(head);
    return 0;
}