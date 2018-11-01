#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
           b[i][x]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            cin>>a[i][x];
            if(a[i][x]==0)
            {
                for(int l=0;l<m;l++)b[i][l]=0;
                for(int l=0;l<n;l++)b[l][x]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            for(int l=0;l<m;l++)c=max(b[i][l],c);
            for(int l=0;l<n;l++)c=max(b[l][x],c);
            if(c!=a[i][x]){cout<<"NO"<<endl;return 0;}
            c=0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
            cout<<b[i][x]<<" ";
        cout<<endl;
    }
}
