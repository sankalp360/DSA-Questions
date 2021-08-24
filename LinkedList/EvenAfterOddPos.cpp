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

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if (odd->next == NULL)
    {
        even->next = NULL;
    }
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

    evenAfterOdd(head);

    display(head);

    return 0;
}