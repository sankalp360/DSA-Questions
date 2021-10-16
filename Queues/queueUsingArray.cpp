#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *arr = new int[size];

    Queue(int size) : front(-1), rear(-1), size(size) {}

    void enqueue(int val);
    int dequeue();
};

void Queue::enqueue(int val)
{
    if (rear < size - 1)
    {
        arr[++rear] = val;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

int Queue::dequeue()
{
    int el = -1;
    if (front != rear)
    {
        el = arr[front + 1];
        front++;
    }
    else
    {
        cout << "Underflow" << endl;
    }
    return el;
}

int main()
{
    int size;
    Queue q(100);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << " ";
    cout << q.dequeue() << " ";
    cout << q.dequeue() << " ";
    for (int i = q.front + 1; i <= q.rear; i++)
    {
        cout << q.arr[i];
    }
}