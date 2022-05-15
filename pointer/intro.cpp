#include <iostream>
using namespace std;

void someFun(int &a) // passing reference
{
    a = a * 2;
    cout << a << endl;
}

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

int main()
{
    // int a = 4;
    // int *p = &a;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // someFun(a);
    // cout << *p << endl;

    Node *new_node = new Node();
    cout << &new_node->data << endl;

    return 0;
}