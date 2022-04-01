#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enque(int data)
{
    if (front == NULL && rear == NULL)
    {
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;
        rear = new_node;
        front = new_node;
        return;
    }
    else
    {
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;
        rear->next = new_node;
        rear = new_node;
        return;
    }
}

void dequeue()
{
    Node *temp = front;
    if (front == NULL && rear == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }
    else if (rear == front)
    {
        front = NULL;
        rear = NULL;
        delete (temp);
        return;
    }
    else
    {
        front = temp->next;
        delete (temp);
        return;
    }
}

void display()
{
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int main()
{
    enque(54);
    enque(51);
    dequeue();
    display();
    return 0;
}