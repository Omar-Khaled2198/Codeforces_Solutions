#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,k,c=1,sum=0;
    cin>>n>>k;
    long a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<k-1;x++) {
            a[i][x]=c;c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=k-1;x<n;x++)
        {
            a[i][x]=c;c++;
        }
    }
    for(int i=0;i<n;i++)
    {
      sum+=a[i][k-1];
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            cout<<a[i][x]<<" ";
        }
        cout<<endl;
    }
}