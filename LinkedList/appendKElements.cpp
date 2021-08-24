#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertInto(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;

    cout << "NULL ";
    while (temp != NULL)
    {
        cout << "<- " << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *appendK(node *&head, int k)
{
    node *temp = head;
    int len = 0;

    while (temp)
    {
        temp = temp->next;
        len++;
    }

    node *newHead;
    node *newTail;
    node *tail = head;

    k = k % len;
    int n = len - k;
    int i = 1;

    while (tail->next != NULL)
    {
        if (i == n)
        {
            newTail = tail;
        }
        if (i == n + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        i++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

int main()
{
    node *head = NULL;

    insertInto(head, 1);
    insertInto(head, 2);
    insertInto(head, 3);
    insertInto(head, 4);
    insertInto(head, 5);
    insertInto(head, 6);

    display(head);

    node *newHead = appendK(head, 4);

    display(newHead);

    return 0;
}