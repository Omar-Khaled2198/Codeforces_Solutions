#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            cin>>a[i][x];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(a[i][x]=='#'&&a[i][x+1]=='#'&&a[i][x-1]=='#'&&a[i-1][x]=='#'&&a[i+1][x]=='#')
            {
                a[i][x]=a[i][x+1]=a[i][x-1]=a[i-1][x]=a[i+1][x]='.';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(a[i][x]=='.')c++;
        }
    }
    if(c==n*n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
