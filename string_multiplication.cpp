#include<bits/stdc++.h>
using namespace std;

string str_add(string s1, string s2)
{
    string fs,rs="";
    int n=2,m,l1,l2,c=0,sum;
    l1 = s1.length();
    l2 = s2.length();
    m = max(s1.length(),s2.length());
    for (int i=0; i<m; i++)
    {  
        sum = int(s1[l1-i-1]) + int(s2[l2-i-1]) + c - 2*int('0');
        if (sum < 0)
        {
            sum += int('0');
        }
        if (sum > 9)
        {
            c = (sum)/10;
            fs += char((sum)%10 + int('0'));
        }
        else
        {
            c=0;
            fs += char(sum + int('0'));
        }        
    }
    if (c != 0)
    {
        fs += char(c+int('0'));
    }
    for (int i=0; i<fs.length() + c%10; i++)
    {
        rs += fs[fs.length()-i-1];
    }
    return rs;
}

string str_mult(string s1, char a)
{
    int sum,c=0;
    string fs="",rs="";
    for (int i=0; i<s1.length(); i++)
    {
        sum = c;
        for (int j=0; j<int(a)-int('0'); j++)
        {
            sum += int(s1[s1.length()-i-1]) - int('0');
        }
        if (sum > 9)
        {
            c = (sum)/10;
            fs += char((sum)%10 + int('0'));
        }
        else
        {
            c=0;
            fs += char(sum + int('0'));
        }
    }
    if (c != 0)
    {
        fs += char(c+int('0'));
    }
    for (int i=0; i<fs.length() + c%10; i++)
    {
        rs += fs[fs.length()-i-1];
    }
    return (rs);
}

int main()
{
    string s1,s2,fs="0",s3,s4="";
    int m,c=0,sum;
    cout<<"enter the first number : ";
    cin>>s1;
    cout<<"enter the second number : ";
    cin>>s2;
    for (int i=0; i<s2.length(); i++)
    {
        s3 = str_mult(s1,s2[s2.length()-i-1]);
        for (int j=0; j<i; j++)
        {
            s3 += "0";
        }
        fs = str_add(s3,fs);
    }
    cout<<fs;
    return 0;
}