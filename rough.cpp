#include<bits/stdc++.h>
using namespace std;
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT //  
    string a,b;
    cin>>a;
    cin>>b;
    int a_num;// = "";
    int a_deno;// = "";
    int b_num;// = "";
    int b_deno;// = "";
    //string a_num = "";
    //string a_deno = "";
    //string b_num = "";
    //string b_deno = "";
    int l1 = a.length();
    int l2 = b.length();
    int i;
    for (i=0; i<l1; i++)
    {
        if (a[i] == '/')
        {
            break;
        }
        //a_num += (int(a[l1-i-1]) - int('0'));//*(10**(l1-i-1));
        a_num = int(a[i]) - int('0');
    }
    for (int j=i; j<l1-1; j++)
    {
        //if (a[j] == '\0')
        //{
        //    break;
        //}
        //a_deno += (int(a[l1-j-1]) - int('0'));//*(10**(l1-j-1));
        a_deno = int(a[j]) - int('0');
    }
    for (i=0; i<l2; i++)
    {
        if (b[i] == '/')
        {
            break;
        }
        b_num = int(b[i]) - int('0');
    }
    for (int j=i; j<l2-1; j++)
    {
        b_deno = int(b[j]) - int('0');
    }
    int ans_num = (a_num*b_deno)-(b_num*a_deno);
    int ans_deno = a_deno*b_deno;
    if (ans_num % ans_deno == 0)
    {
        //string ans = char(ans_num/ans_deno);
        cout<<ans_num/ans_deno;
    }
    else
    {
        //string ans = char(ans_num + int('0')) + "/" + char(ans_deno + int('0'));
        cout<<ans_num<<"/"<<ans_deno;
    }

    return 0;
}*/

class Solution {
public:
    int isValid(string s) 
    {
        string s1 = "";
        int top = -1;
        bool flag = false;
        for(int i=0; i<s.length(); i++)
        {
            /*
            if(s1 == "")
            {
                s1 += s[i];
                top = 0;
            }*/
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1 += s[i];
                top += 1;
                
            }
            else
            {
                if (s1[top] == '(' && s[i] == ')')// || (s1[top] == '[' && s[i] == ']') || (s1[top] == '{' && s[i] == '}'))
                {
                    //s1[top] = '\0'; 
                    top -= 1;
                }
                else if (s1[top] == '[' && s[i] == ']')
                {
                    top -= 1;
                }
                else if (s1[top] == '{' && s[i] == '}')
                {
                    top -= 1;
                }
                if (top == -1)
                {
                    s1 = "";
                }
            }
            cout<<s1<<"\t"<<s[i]<<"\t"<<top<<endl;
            //cout<<s1<<endl;
        }
        if (top == -1)
        {
            return ;
        }
        else
        {
            return 11;
        }

    }
};

int main()
{
    Solution* s = new Solution();
    cout<<s->isValid("]");
}