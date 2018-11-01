#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,y,z;
    cin>>n>>m;
    int a[n+1],c[n+1];
    fill(a,a+n+1,-1);
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        if(a[x]==-1&&a[y]==-1&&a[z]==-1)
        {
            c[x]=1;c[y]=2;c[z]=3;
            a[x]=1;a[y]=2;a[z]=3;
        }
        else if(a[x]!=-1&&a[y]==-1&&a[z]==-1)
        {
            if(a[x]==1){a[y]=2;a[z]=3;c[y]=2;c[z]=3;}
            if(a[x]==2){a[y]=1;a[z]=3;c[y]=1;c[z]=3;}
            if(a[x]==3){a[y]=1;a[z]=2;c[y]=1;c[z]=2;}
        }
        else if(a[x]==-1&&a[y]!=-1&&a[z]==-1)
        {
            if(a[y]==1){a[x]=2;a[z]=3;c[x]=2;c[z]=3;}
            if(a[y]==2){a[x]=1;a[z]=3;c[x]=1;c[z]=3;}
            if(a[y]==3){a[x]=1;a[z]=2;c[x]=1;c[z]=2;}
        }
        else if(a[x]==-1&&a[y]==-1&&a[z]!=-1)
        {
            if(a[z]==1){a[y]=2;a[x]=3;c[y]=2;c[x]=3;}
            if(a[z]==2){a[y]=1;a[x]=3;c[y]=1;c[x]=3;}
            if(a[z]==3){a[y]=1;a[x]=2;c[y]=1;c[x]=2;}
        }
    }
    for(int i=1;i<n+1;i++)cout<<c[i]<<" ";
}
