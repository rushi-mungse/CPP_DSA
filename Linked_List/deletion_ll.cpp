// Delete node
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

void pritnNode(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

// delete from beginning
void deleteNode(Node **head_ref)
{
    if (*head_ref == NULL)
        return;
    Node *temp = *head_ref;
    *head_ref = temp->next;
    delete temp;
    return;
}

void deleteFromEnd(Node **head_ref)
{
    if (*head_ref == NULL)
        return;
    Node *temp = *head_ref;
    Node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
    return;
}

void deleteAnyPos(Node **head_ref, int pos)
{
    if (*head_ref == NULL)
        return;
    Node *temp = *head_ref;
    Node *prev = NULL;
    int count = 1;
    while (count < pos)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    prev->next = temp->next;
    delete temp;
    return;
}

int main()
{
    Node *head = NULL;
    push(&head, 49);
    push(&head, 4);
    push(&head, 59);
    push(&head, 56);
    deleteFromEnd(&head);
    deleteAnyPos(&head, 2);
    deleteNode(&head);

    pritnNode(head);
    return 0;
}