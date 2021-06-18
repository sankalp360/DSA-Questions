#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

public:
    Node<T>(T data)
    {
        this->data = data;
        next = NULL;
    }
};

void printLL(Node<int> *head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << "-->";
        head = head->next;
    }
    cout << endl;
}

void insertAtHead(Node<int> *&head, int data)
{
    if (head == NULL)
    {
        head = new Node<int>(data);
        return;
    }

    Node<int> *newNode = new Node<int>(data);
    newNode->next = head;
    head = newNode;
}

void insertInMiddle(Node<int> *&head, int data, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, data);
    }
    else
    {
        int curr = 1;
        Node<int> *temp = head;
        while (curr < pos - 1)
        {
            temp = temp->next;
            curr++;
        }
        Node<int> *newNode = new Node<int>(data);
        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }
}

int main()
{
    Node<int> *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    int n;
    cin >> n;
    insertAtHead(head, 1);
    insertInMiddle(head, n, 3);
    printLL(head);
}