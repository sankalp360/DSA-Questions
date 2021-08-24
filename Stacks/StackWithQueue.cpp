#include <iostream>
#include <queue>
using namespace std; //using standards

class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        N = 0;
    }
    void push(int x)
    {
        q2.push(x);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        cout << x << " Inseted" << endl;
    }
    void pop()
    {
        cout << q1.front() << " Removed" << endl;
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
        return N;
    }

    bool empty()
    {
        if (q1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Top of stack: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;

    s.pop();
    s.pop();
    s.pop();

    cout << "Size of stack: " << s.size() << endl;

    cout << "Top of stack: " << s.top() << endl;

    cout << s.empty() << endl;

    s.pop();

    cout << s.empty() << endl;
    return 0;
}