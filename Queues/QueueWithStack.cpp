#include <iostream>
#include <stack>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int x)
    {
        s1.push(x);
    }

    void dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Can't remove more, Queue is empty" << endl;
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.empty() << endl;
    q.dequeue();
    cout << q.empty() << endl;
    q.dequeue();

    cout << q.empty() << endl;

    return 0;
}
