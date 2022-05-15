#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};

Node *createBT()
{
    Node *new_node = new Node();
    int x;
    cout << "Eneter the value of data : ";
    cin >> x;
    if (x == -1)
        return NULL;
    new_node->data = x;
    cout << "Left Node : " << endl;
    new_node->left = createBT();
    cout << "Right Node : " << endl;
    new_node->right = createBT();
    return new_node;
}

void traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    traversal(root->left);
    traversal(root->left);
    return;
}

int main()
{
    Node *root = new Node();
    root = createBT();
    traversal(root);
    return 0;
}