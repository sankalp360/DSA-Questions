#include <bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack
{
public:
    int top;
    int arr[MAX];

    Stack() : top(-1) {}

    bool isEmpty()
    {
        return (top == -1);
    }

    void push(int val)
    {
        if (top < MAX - 1)
            arr[++top] = val;
        else
            cout << "--Overflow--" << endl;
    }

    int pop()
    {
        int el = -1;
        if (top != -1)
        {
            el = arr[top--];
        }
        else
        {
            cout << "--Underflow--" << endl;
        }
        return el;
    }
};

int main()
{
    Stack *st = new Stack();
    st->push(2);
    st->push(3);
    st->push(4);

    while (st->top != -1)
    {
        cout << st->pop() << endl;
    }

    return 0;
}