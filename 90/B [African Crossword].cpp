#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;string s="";
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            cin>>a[i][x];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            for(int l=0;l<m;l++)
            {
                if(a[i][x]==a[i][l])c++;
            }
            for(int l=0;l<n;l++)
            {
                if(a[i][x]==a[l][x])c++;
            }
            if(c==2)s+=a[i][x];
            c=0;
        }
    }
    cout<<s<<endl;

}
