#include <bits/stdc++.h>

using namespace std;

bool check(unsigned long long n)
{
    unsigned long long s=sqrt(n);
    if(s*s==n)
        return true;
    else return false;
}

int main()
{
    bool prime[1000001];
    fill(prime,prime+1000000,1);
    prime[1]=0;
    for(int i=2;i*i<=1000000;i++)
    {
        if(prime[i]==1)
        {
            for(int x=2*i;x<=1000000;x+=i)
            {
                prime[x]=0;
            }
        }
    }
    long long n,x;
    cin>>n;
    long long t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(check(t)==1)
        {
            x=sqrt(t);
            if(prime[x]==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}