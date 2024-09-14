#include<bits/stdc++.h>

using namespace std;

int fibonaci(int arr[], int n)
{
    if (arr[n] == -1)
    {
        int temp = fibonaci(arr, n-1) + fibonaci(arr, n-2);
        arr[n] = temp;
        return arr[n]; 
    }
    else
    {
        return arr[n];
    }
}

int main()
{
    int n; 
    cout<<"enter the number of terms in fibonaci : ";
    cin>>n;
    int arr[n+1];
    memset(arr, -1, sizeof(arr));
    arr[0] = 0;
    arr[1] = 1;
    cout<<fibonaci(arr, n);
}
