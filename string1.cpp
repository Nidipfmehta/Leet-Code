#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
    string s1;
    int arr[26] = {0};
    cin>>s1;
    for (int i=0; i<s1.length(); i++)
    {
        arr[s1[i] - int('a')] += 1;
    }

    for (int i=0; i<26; i++)
    {
        cout<<(char)(i+'a')<<" occured "<<arr[i]<<" times "<<endl;
    }
 }