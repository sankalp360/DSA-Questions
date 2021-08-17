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
        q1.push(x);
        cout << x << " Inseted" << endl;
        N++;
    }
    void pop()
    {
        if (q1.empty())
        {
            cout << "Can't remove, Stack is Empty" << endl;
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        cout << q1.front() << " Removed" << endl;
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);
        q1.pop();

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
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