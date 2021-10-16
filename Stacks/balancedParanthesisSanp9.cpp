#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack
{
public:
    int top;
    char arr[MAX];

    Stack() : top(-1) {}

    bool isEmpty()
    {
        return (top == -1);
    }

    void push(char val)
    {
        if (top < MAX - 1)
            arr[++top] = val;
        else
            cout << "--Overflow--" << endl;
    }

    char pop()
    {
        char el = '-';
        if (top != -1)
        {
            el = arr[top--];
        }
        return el;
    }
};

int main()
{
    Stack st;
    string exp;
    cin >> exp;

    bool isValid = true;

    for (char c : exp)
    {
        if (!isValid)
        {
            cout << "Not Balanced";
            exit(0);
        }
        if (c == '(' or c == '{' or c == '[')
            st.push(c);

        else if (c == ')')
        {
            if (st.pop() != '(')
            {
                isValid = false;
            }
        }
    }
    if (!isValid or !st.isEmpty())
    {
        cout << "Not Balanced";
        exit(0);
    }
    cout << "Balanced";
    return 0;
}