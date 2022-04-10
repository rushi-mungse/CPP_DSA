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
    cout << "Enter the value of data : ";
    cin >> x;
    cout << endl;
    Node *new_node = new Node();

    if (x == -1)
    {
        return NULL;
    }

    new_node->data = x;
    cout << "Left child of above node : " << endl;
    new_node->left = createNode();
    cout << "Right child of previous node : " << endl;
    new_node->right = createNode();

    return new_node;
}

void btTraversal(Node *root)
{
    if (root == NULL)
        return;
    btTraversal(root->left);
    btTraversal(root->right);
    cout << root->data << " ";
    cout << endl;
}

int main()
{
    Node *root;
    root = createNode();
    btTraversal(root);
    return 0;
}