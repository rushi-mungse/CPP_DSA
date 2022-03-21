#include <iostream>
using namespace std;

class Node
{
    int data;

public:
    Node *next;
    Node(int dataToUser)
    {
        data = dataToUser;
    }
    void printAllNodes(Node *head);
    void push(Node **head_ref, int data);
    void push(Node **head, int data, int position);
    void push(int data, Node **head);
};

void Node::printAllNodes(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    return;
}

void Node::push(Node **head, int data)
{
    // check if linked list is empty or not
    if (*head == NULL)
    {
        cout << "Linked list is empty. " << endl;
        return;
    }

    // creating new node
    Node *newNode = new Node(data);
    // declared address to node pointer
    newNode->next = *head;
    // remove the previous node pointer and declaring new head
    *head = newNode;
    return;
}
void Node ::push(Node **head, int data, int position)
{

    if (*head == NULL)
        return;

    Node *temp = *head;
    Node *prev = NULL;

    int count = 0;

    while (count < position && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    Node *newNode = new Node(data);
    newNode->next = temp;
    prev->next = newNode;
    return;
}

void Node::push(int data, Node **head)
{
    if (*head == NULL)
        return;

    Node *temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    Node *newNode = new Node(data);
    temp->next = newNode;
    newNode->next = NULL;

    return;
}

int main()
{
    Node *head = new Node(4);
    Node *secodNode = new Node(6);
    Node *thirdNode = new Node(78);

    // for practice
    Node *empty = NULL;
    Node newList(4);
    newList.next = head;

    head->next = secodNode;
    secodNode->next = thirdNode;
    thirdNode->next = NULL;
    // push at biginnig
    head->push(&head, 55);
    // push at any positon
    head->push(&head, 45, 2);
    // push at end
    head->push(90, &head);
    cout << "This is initial level " << endl;
    // Empty linked list
    head->printAllNodes(empty);
    // some node in this linked list
    head->printAllNodes(head);
    return 0;
}