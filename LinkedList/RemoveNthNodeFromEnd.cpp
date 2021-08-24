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

int lengthOfList(node *&head)
{
    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

void removeNthFromEnd(node *&head, int n)
{
    node *temp = head;

    while (temp->next->data != n)
    {
        temp = temp->next;
    }

    node *toDelete = temp->next;

    temp->next = temp->next->next;
    delete toDelete;
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

    int pos = 2;

    insertInto(head, 1);
    insertInto(head, 2);
    insertInto(head, 3);
    insertInto(head, 4);
    insertInto(head, 5);
    insertInto(head, 6);

    display(head);

    int len = lengthOfList(head);

    int n = len - pos + 1;

    removeNthFromEnd(head, n);
    display(head);

    return 0;
}