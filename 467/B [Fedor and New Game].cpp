#include <bits/stdc++.h>

using namespace std;

string binary(long long n)
{
    string s="";
    while(n!=0)
    {
        if(n%2==0)s+="0";
        else s+="1";
        n/=2;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     long n,m,k,count=0,x,c=0;
    cin>>n>>m>>k;
    string s;
    int a[1001][1001];
    for(int i=0;i<1001;i++)
    {
        for(int x=0;x<1001;x++)
        {
            a[i][x]=-1;
        }
    }
    for(int i=0;i<=m;i++)
    {
       cin>>x;
        s=binary(x);
        for(int x=0;x<s.size();x++)
        {
            if(s[x]=='1')
            {
                a[i][x]=1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        c=0;
        for(int x=0;x<1001;x++)
        {
            if(a[i][x]!=a[m][x])
            {
                c++;
            }
        }
        if(c<=k){count++;}
    }
    cout<<count<<endl;

}