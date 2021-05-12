class Node{
    public:
        int data;
        Node* next;
    
        Node(int val)
        {
            data = val;
            next = NULL;
        }
};

void insertTail(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}

void display(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}


int main()
{
    int n;
    cin >> n;
    Node* head = NULL;
    while(n--)
    {
        int val;
        cin >> val;
        insertTail(head, val);
    }
    display(head);
}
