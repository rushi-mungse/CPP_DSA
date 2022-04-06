// Implimentation of binary tree using linked list with resursion
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *right, *left;
};

Node *createNode()
{
    int x;
    cout << "Enter the value of data to store in node : ";
    cin >> x;
    Node *newNode = new Node();
    if (x == -1)
        return NULL;

    newNode->data = x;
    cout << "Enter the left child :" << endl;
    newNode->left = createNode();
    cout << "Enter the right child :" << endl;
    newNode->right = createNode();
    return newNode;
}

int main()
{
    Node *root = NULL;
    root = createNode();
    return 0;
}