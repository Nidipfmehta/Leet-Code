#include<bits/stdc++.h>

using namespace std;

int printarr(int arr[], int n)
{
    if (n==1)
    {
        return arr[n-1];
    }
    else
    {
        return arr[n-1] + printarr(arr, n-1);
    }
}

int main()
{
    int a[6]={1,2,3,4,5,6};
    cout<<"sum = "<<printarr(a, 6);
}