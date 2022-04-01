#include <iostream>
using namespace std;

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (front == -1 && rear == -1)
    {
        rear = 0;
        front = 0;
        queue[rear] = data;
        return;
    }
    else if (rear == MAX - 1)
    {
        cout << "Queue is full." << endl;
        return;
    }
    else
    {
        rear++;
        queue[rear] = data;
        return;
    }
}

void display()
{
    for (int i = front; i < rear + 1; i++)
        cout << queue[i] << " ";
    cout << endl;
    return;
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty." << endl;
        return;
    }
    else if (rear == front)
    {
        cout << "Dequeue element is : " << queue[front] << endl;
        rear = -1;
        front = -1;
        return;
    }
    else
    {
        cout << "Dequeued element is : " << queue[front] << endl;
        front++;
        return;
    }
}

void peek()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is full." << endl;
        return;
    }
    else
    {
        cout << "Peek element is : " << queue[rear] << endl;
        return;
    }
}

int main()
{
    enqueue(5);
    enqueue(1);
    enqueue(0);
    enqueue(9);
    display();
    dequeue();
    display();
    peek();
    return 0;
}