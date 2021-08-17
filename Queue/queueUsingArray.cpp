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
};

void Queue::enqueue(int val)
{
}

int main()
{
    int size;
    cin >> size;
    Queue q(100);
    q.enqueue(2);
}