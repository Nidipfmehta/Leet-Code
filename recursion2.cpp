#include<bits/stdc++.h>

using namespace std;

int func(int x, int n, int c)
{
    // *c += 1;
    if (n%2==1)
    {
        if(n==1)
        {
            return x;
        }
        else
        {
            // int a = func(x, n/2, c);
            return x*func(x, n/2, c++)*func(x, n/2, c++);
        }
    }
    else
    {
        if(n==1)
        {
            return x;
        }
        else
        {
            // int a = func(x, n/2, c);
            return func(x, n/2, c++)*func(x, n/2, c++);
        }
    }

}

int main()
{
    int x, n, c=1;
    // int *c=0;
    cout<<"Enter the base number : ";
    cin>>x;
    cout<<"enter the power : ";
    cin>>n;
    cout<<func(x, n, c)<<" count : "<<c;
}