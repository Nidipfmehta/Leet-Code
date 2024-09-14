#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Double_LL
{
    private:
    Node *head;
    Node *tail;
    public:
    Double_LL()
    {
        head = NULL;
        tail = NULL;
    }

    int size_LL()
    {
        if (head == NULL)
        {
            return 0;
        }
        Node *temp;
        temp = head;
        int c = 1;
        while(temp!=tail)
        {
            c += 1;
            temp = temp->next;
        }
        return c;
    }

    void insert_at_begin(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            tail = head;
            //cout<<"head added"<<endl;
        }
        else
        {
            Node *newnode;
            newnode = new Node(data);
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void insert_at_end(int data)
    {
        if (tail == NULL)
        {
            tail = new Node(data);
            head = tail;
            //cout<<"tail i null"<<endl;
        }
        else
        {
            Node *newnode;
            newnode = new Node(data);
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void insert_in_middle(int i, int data)
    {
        int c=1;
        if (head == NULL)
        {
            cout<<"\nthis method requires at least 1 node and here there are none\nso node not inserted"<<endl;
            return;
        }
        Node* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            c += 1;
        }
        Node* newnode = new Node(data);
        if (i == 1)
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
            
        }
        else if (i == c)
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
        else
        {
            
            Node* temp1 = head;
            Node* temp2 = head->next;
            while(c<i)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
                c += 1;
            }
            temp1->next = newnode;
            newnode->prev = temp1;
            newnode->next = temp2;
            temp2->prev = newnode;
        }
        
    }

    void delete_from_begin()
    {
        if(head == NULL)
        {
            cout<<"\ncannot delete as LL is empty"<<endl;
            return;
        }
        cout<<"\nDeleted value of first node : "<<head->data<<endl;
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            cout<<"LL is now empty"<<endl;
        }
        else
        {
            head->next = NULL;
            head->next->prev = NULL;
            head = head->next;
        }
    }

    void delete_from_end()
    {
        if(head == NULL)
        {
            cout<<"\ncannot delete as LL is empty"<<endl;
            return;
        }
        cout<<"\nDeleted value of last node : "<<tail->data<<endl;
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            cout<<"LL is now empty"<<endl;
        }
        else
        {
            //Node* temp = tail;
            tail = tail->prev;
            tail->next->prev = NULL;
            tail->next = NULL;
        }
    }

    void delete_from_middle(int i)
    {
        if(head == NULL)
        {
            cout<<"\ncannot delete as LL is empty"<<endl;
            return;
        }
        int c=1;
        Node* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            c += 1;
        }

        if (head->next == NULL)
        {
            cout<<"\nDeleted value of remaining node : "<<head->data<<endl;
            head = NULL;
            tail = NULL;
            cout<<"LL is now empty"<<endl;
            return;
        }
        if (i == 1)
        {
            //Node* temp = head->next;
            cout<<"\nDeleted value of node "<<i<<" : "<<head->data<<endl;
            head = head->next;
            head->prev->next = NULL;
            head->prev = NULL;
        }
        else if (i == c)
        {
            cout<<"\nDeleted value of node "<<i<<" : "<<tail->data<<endl;
            tail = tail->prev;
            tail->next->prev = NULL;
            tail->next = NULL;
        }
        else
        {
            Node* temp1 = head;
            Node* temp2 = head->next;
            for (int j=1; j<i-1; j++)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            cout<<"\nDeleted value of node "<<i<<" : "<<temp2->data<<endl;
            temp1->next = temp2->next;
            temp2->next->prev = temp1;
            //temp2->next = NULL;     // do we need to write this and the line below this?
            //temp2->prev = NULL;
        }
    }

    void print_double_LL()
    {
        Node* temp = head;
        cout<<"\nprinting linked list : \n";
        while (temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
    }
};

int main()
{
    Double_LL* d_ll = new Double_LL();
    cout<<d_ll->size_LL()<<endl;
    //d_ll->insert_in_middle(1,22);
    //d_ll->print_double_LL();
    d_ll->insert_at_begin(1);
    //d_ll->delete_from_middle(1);
    d_ll->print_double_LL();
    d_ll->insert_in_middle(2,21);
    d_ll->print_double_LL();
    d_ll->insert_at_begin(2);
    d_ll->print_double_LL();
    d_ll->delete_from_end();
    d_ll->print_double_LL();
    d_ll->insert_at_begin(3);
    //cout<<"\n"<<d_ll->size_LL()<<endl;
    d_ll->print_double_LL();
    d_ll->insert_at_end(10);
    //d_ll->delete_from_middle(3);
    d_ll->print_double_LL();
    d_ll->insert_at_end(11);
    d_ll->insert_at_end(12);
    d_ll->print_double_LL();
    d_ll->delete_from_middle(3);
    //cout<<"\n"<<d_ll->size_LL()<<endl;
    d_ll->print_double_LL();
    d_ll->insert_in_middle(1,20);
    d_ll->delete_from_end();
    d_ll->print_double_LL();
}