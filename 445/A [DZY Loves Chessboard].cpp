#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char in[r][c],t[r][c];
    for(int i=0;i<r;i++)
    {
        for(int x=0;x<c;x++)
        {
            if(i%2==0)
            {
                if(x%2==0)t[i][x]='B';
                else t[i][x]='W';
            }
            else
            {
                if(x%2==0)t[i][x]='W';
                else t[i][x]='B';
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int x=0;x<c;x++)
        {
            cin>>in[i][x];
            if(in[i][x]=='-')
                t[i][x]='-';
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int x=0;x<c;x++)
        {
            cout<<t[i][x];
        }
        cout<<endl;
    }
}