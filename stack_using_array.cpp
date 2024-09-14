#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1024

class Stack
{
    private:
    int arr[MAX_SIZE];
    int top;

    public://push, pop, top, size 
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == MAX_SIZE)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top += 1;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        int temp = top;
        top -= 1;
        return arr[temp];
    }

    int top_element()
    {
        if (top == -1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    int size()
    {
        return top+1;
    }
};

int main()
{
    Stack* a = new Stack();
    a->push(1);
    a->push(2);
    a->push(3);
    a->push(4);
    cout<<"Poped element : "<<a->pop()<<endl;
    cout<<"Poped element : "<<a->pop()<<endl;
    a->push(5);
    cout<<"Top element : "<<a->top_element()<<endl;
    cout<<"Size : "<<a->size()<<endl;
}