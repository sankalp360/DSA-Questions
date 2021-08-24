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

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }

    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

int lenOfList(node *head)
{
    node *temp = head;
    int count = 0;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int intersectionPoint(node *&head1, node *&head2)
{
    int len1 = lenOfList(head1);
    int len2 = lenOfList(head2);

    int diff = 0;

    node *ptr1;
    node *ptr2;

    if (len1 > len2)
    {
        diff = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff--)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertInto(head1, 51);
    insertInto(head1, 42);
    insertInto(head1, 33);
    insertInto(head1, 24);
    insertInto(head1, 15);
    insertInto(head1, 6);
    insertInto(head2, 9);
    insertInto(head2, 10);

    display(head1);
    display(head2);

    intersect(head1, head2, 4);

    display(head1);
    display(head2);

    cout << intersectionPoint(head1, head2) << endl;

    return 0;
}