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
    else if ((rear + 1) % MAX == front)
    {
        cout << "Queue is full." << endl;
        return;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = data;
        return;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    else if (rear == front)
    {
        cout << "dequeued element is : " << queue[front] << endl;
        rear = -1;
        front = -1;
        return;
    }
    else
    {
        front = (front + 1) % MAX;
        cout << "dequeued element is : " << queue[front] << endl;
        return;
    }
}

void display()
{
    int i = front;
    while (i != rear)
    {
        cout << queue[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << queue[rear] << endl;
    return;
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    dequeue();
    display();
    return 0;
}