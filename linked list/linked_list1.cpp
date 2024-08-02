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
    printLL(head);
    return 0;
}