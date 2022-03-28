#include <iostream>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;
};

StackNode *stackNode(int data)
{
    StackNode *new_stackNode = new StackNode();
    new_stackNode->data = data;
    new_stackNode->next = NULL;
    return new_stackNode;
}

void push(StackNode **root, int data)
{
    StackNode *newNode = stackNode(data);
    newNode->next = *root;
    *root = newNode;
    return;
}

void pop(StackNode **root)
{
    StackNode *temp = *root;
    *root = temp->next;
    delete (temp);
    return;
}

void display(StackNode *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
    return;
}

void isEmpty(StackNode *root)
{
    if (root == NULL)
        cout << "stack is empty." << endl;
    else
        cout << "stack is not empty." << endl;
    return;
}

int main()
{
    StackNode *root = NULL;
    push(&root, 4);
    push(&root, 5);
    push(&root, 6);
    push(&root, 8);
    push(&root, 1);
    isEmpty(root);
    pop(&root);
    display(root);
    return 0;
}