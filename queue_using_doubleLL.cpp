#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1024

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Queue
{
    private:
    Node* front;
    Node* rear;

    public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data)
    {
        Node* newnode = new Node(data);
        if (rear == NULL)
        {
            rear = newnode;
            front = rear;
        }
        else
        {
            rear->next = newnode;
            newnode->prev = rear;
            rear = newnode;
        }
        cout<<"enqueued"<<endl;
    }

    void queue()
    {
        if (front == NULL || front == rear)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        int x = front->data;
        front = front->next;
        front->prev->next = NULL;
        front->prev = NULL;
        if (front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        cout<<"Deleted element is "<<x<<endl;
    }

    void display()
    {
        if (front == NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = front;
        while(temp != rear)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }

    void peek()
    {
        if (front == NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"front element is "<<front->data<<endl;
    }
};

int main()
{
    Queue* q = new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->queue();
    q->queue();
    q->display();
    q->peek();
}