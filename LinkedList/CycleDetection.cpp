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

bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;

    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
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

    insertInto(head, 1);
    insertInto(head, 2);
    insertInto(head, 3);
    insertInto(head, 4);
    insertInto(head, 5);
    insertInto(head, 6);

    display(head);

    makeCycle(head, 3);

    if (detectCycle(head))
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Detected" << endl;

    removeCycle(head);

    if (detectCycle(head))
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Detected" << endl;

    return 0;
}