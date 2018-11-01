#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n;k=n;
    int a[n],b[100001];
    fill(b,b+100001,0);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(k==a[i])
        {
            b[k]=1;
            for(int x=k;x>=0;x--)
            {
                if(b[x]==1){k--;cout<<x<<" ";}
                else break;
            }
            cout<<endl;
        }
        else
        {
            b[a[i]]++;
            cout<<endl;
        }
    }
}
