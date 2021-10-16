#include <iostream>

using namespace std;

class node
{
public:
    int data;

    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *reverseK(node *&head, int k)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    int count = 0;
    while (currPtr != NULL && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;

        count++;
    }

    if (nextPtr != NULL)
    {
        head->next = reverseK(nextPtr, k);
    }

    return prevPtr;
}

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
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    int k;
    cin >> k;

    insertInto(head, 1);
    insertInto(head, 2);
    insertInto(head, 3);
    insertInto(head, 4);
    insertInto(head, 5);
    insertInto(head, 6);

    display(head);

    node *newHead = reverseK(head, k);
    display(newHead);

    return 0;
}