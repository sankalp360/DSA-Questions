#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node
{
    Node *arr[26];
    bool flag = false;

    bool contains(Node *node, char c)
    {
        return (node->arr[c - 'a'] != NULL);
    }
    void put(char c, Node *newNode)
    {
        arr[c - 'a'] = newNode;
    }

    Node *getNext(char ch)
    {
        return arr[ch - 'a'];
    }
    void setFlag()
    {
        flag = true;
    }
    bool isFlagSet(Node* node)
    {
        if(node->flag == true)
            return true;
        return false;
    }
};

Node *root = new Node();

void insert(string word)
{
    Node *temp = root;
    for (int i = 0; i < word.size(); i++)
    {
        if (!temp->contains(temp, word[i]))
        {
            Node *newNode = new Node();
            temp->arr[word[i] - 'a'] = newNode;
            temp->put(word[i], newNode);
        }
        temp = temp->getNext(word[i]);
    }
    temp->setFlag();
}

bool search(string word)
{
    Node *temp = root;
    for (int i = 0; i < word.size(); i++)
    {
        if (!temp->contains(temp, word[i]))
        {
            temp = temp->getNext(word[i]);
        }
        else
        {
            return false;
        }
    }
    return temp->isFlagSet(temp);
}

signed main()
{
}