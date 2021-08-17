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

node *mergeList(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;

    node *dummy = new node(-1);
    node *temp3 = dummy;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }

    while (temp1)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }

    while (temp2)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }

    return dummy->next;
}

node *mergeListRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeListRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeListRecursive(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertInto(head1, 1);
    insertInto(head2, 2);
    insertInto(head1, 3);
    insertInto(head2, 4);
    insertInto(head1, 5);
    insertInto(head2, 6);

    display(head1);
    display(head2);

    // node *head3 = mergeList(head1, head2);
    node *head3 = mergeListRecursive(head1, head2);

    display(head3);

    return 0;
}