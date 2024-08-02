#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,fs;
    int n=2,m,l1,l2,c=0,sum;
    cout<<"enter the first number : ";
    cin>>s1;
    cout<<"enter the second number : ";
    cin>>s2;
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
        cout<<fs[fs.length()-i-1];
    }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // for (int i=0; i<m; i++)
    // {  
    //     sum = int(s1[l1-i-1]) + int(s2[l2-i-1]) + c - 2*int('0');
    //     if (sum < 0)
    //     {
    //         sum += int('0');
    //     }
    //     //cout<<fs<<"\t"<<c<<"\t"<<sum<<"\t"<<int(s1[l1-i-1])<<"\t"<<int(s2[l2-i-1])<<endl;
    //     if (sum > 9)
    //     {
    //         c = (sum)/10;
    //         // fs += char((sum)%10 + 2*int('0'));
    //         fs = fs*10 + sum%10;
    //     }
    //     else
    //     {
    //         c=0;
    //         // fs += char(sum + 2*int('0'));
    //         fs = fs*10 + sum;
    //     }        
    // }
    // cout<<fs<<"\t"<<c<<"\t"<<sum<<endl;
    // if (c != 0)
    // {
    //     fs = fs*10 + c;
    // }
    // sum = 0;
    // for (int i=0; i<m + c%10; i++)
    // {
    //     sum = sum*10 + fs%10;
    //     fs = fs/10;
    // }
    // cout<<sum;
    return 0;
}