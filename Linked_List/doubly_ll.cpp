#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void printNode(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return;
}
int main()
{
    int x;
    cout << "Enter the value of node data : ";
    cin >> x;
    cout << endl;
    Node *head = NULL;
    Node *newNode = new Node();
    Node *prev = new Node();
    while (x != 0)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        newNode->data = x;
        if (head == NULL)
        {
            head = newNode;
            prev = newNode;
        }
        else
        {
            newNode->prev = prev;
            prev->next = newNode;
        }
        cout << "Enter the value of node data : ";
        cin >> x;
    }
    printNode(head);
    return 0;
}