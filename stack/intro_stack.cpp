// LIFO -- FILO -->Principle

#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int top;

public:
    int stack[MAX];
    Stack() { top = -1; }
    void push(int data);
    void pop();
    void peek();
    void display();
    void isEmpty();
    void isFull();
};

void Stack::push(int data)
{
    if (top >= MAX - 1)
        cout << "Stack is full." << endl;
    else
    {
        top++;
        stack[top] = data;
        cout << "Pushed element is : " << data << endl;
    }
    return;
}

void Stack::pop()
{
    if (top == -1)
        cout << "Stack is empty." << endl;
    else
    {
        int temp = stack[top];
        cout << "Poped element is : " << temp << endl;
        top--;
    }
    return;
}

void Stack::peek()
{
    cout << "Peeked element is : " << stack[top] << endl;
    return;
}

void Stack::display()
{
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
    return;
}

void Stack::isEmpty()
{
    if (top == -1)
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is not Empty." << endl;
}
void Stack::isFull()
{
    if (top >= MAX - 1)
        cout << "Stack is Full." << endl;
    else
        cout << "Stack is not Full." << endl;
}

int main()
{
    Stack s;
    s.push(4);
    s.push(5);
    s.push(45);
    s.push(43);
    s.push(43);
    s.pop();
    s.isEmpty();
    s.isFull();
    s.display();
    return 0;
}