#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,m=0,x;
    cin>>n;
    int a[n+1];
    fill(a,a+n+1,0);
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        if(a[x]==0)
        {
            a[x]++;sum++;
        }
        else if(a[x]==1)
        {
            a[x]++;sum--;
        }
        m=max(sum,m);
    }
    cout<<m<<endl;
}