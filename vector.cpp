#include<bits/stdc++.h>
#
using namespace std;

void print_vector(vector< vector< vector< vector< int > > > > &a)
{
    for (int i=0; i<a.size(); i++)
    {
        for (int j=0; j<a[i].size(); j++)
        {
            for (int k=0; k<a[j].size();k++)
            {
                for (int s=0; s<a[k].size(); k++)
                {
                    cout<<a[i][j][k][s]<<"\t";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    vector< vector< vector< vector< int > > > > a(4, vector< vector< vecetor< int > > (4, vector< vector< int > > (4, vector< int > (4, 1))));
}