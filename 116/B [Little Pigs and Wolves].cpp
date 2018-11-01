#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    char t[n][m];
    for(int i=0;i<n;i++)
    {
        for(int l=0;l<m;l++)
        {
            cin>>t[i][l];
        }
        for(int l=0;l<m-1;l++)
        {
            if(t[i][l]=='W'&&t[i][l+1]=='P'||t[i][l]=='P'&&t[i][l+1]=='W')
            {
                t[i][l]='.';t[i][l+1]='.';c++;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int l=0;l<n-1;l++)
        {
            if(t[l][i]=='W'&&t[l+1][i]=='P'||t[l][i]=='P'&&t[l+1][i]=='W')
            {
                t[l][i]='.';t[l+1][i]='.';c++;
            }
        }
    }
    cout<<c<<endl;
}