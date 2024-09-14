#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtBeginning(int data, Node* head)
{
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
    return head;
}

Node* insertAtEnd(int data, Node* head)
{
    Node* temp = head;
    if (head == NULL)
    {
        return head;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newnode = new Node(data);
    temp->next = newnode;
    return head;
}

Node* insertInMiddle(int data, int a, Node* head)
{
    Node* temp = head;
    int i=1;
    Node* newnode = new Node(data);
    if (head == NULL || a <= 1)
    {
        newnode->next = head;
        return newnode;
    }
    while(i<=a-1 && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

Node* appendTwoList(Node* head1, Node* head2)
{
    Node* temp = head1;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

void sumOfLinkedList(Node* head)
{
    int sum = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    cout<<"sum of linked list : "<<sum<<endl;
}

void isSameList(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
    }
}

void printLL(Node* head)
    {
        Node* temp = head;
        cout<<"printing linked list : \n";
        while (temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
    }

int main()
{
    Node* head1 = new Node(1);
    head1 = insertAtEnd(2, head1);
    head1 = insertAtEnd(3, head1);
    head1 = insertAtBeginning(0, head1);
    head1 = insertAtBeginning(4, head1);
    head1 = insertAtBeginning(5, head1);
    head1 = insertAtBeginning(6, head1);
    head1 = insertInMiddle(7, 3, head1);
    head1 = insertAtBeginning(9, head1);
    sumOfLinkedList(head1);
    printLL(head1);
    cout<<endl;
    int n;
    cout<<"Enter the number of lists : ";
    cin>>n;
    int i=n;
    Node* head = NULL;
    Node* temp = NULL;
    while (i>0)
    {
        int data;
        cout<<"Enter the value of data : ";
        cin>>data;
        if (i==n)
        {
            head = new Node(data);
            temp = head;
        }
        else
        {
            temp->next = new Node(data);
            temp = temp->next;
        }
        i--;
    }
    head1 = appendTwoList(head, head1);
    printLL(head1);
    return 0;
}