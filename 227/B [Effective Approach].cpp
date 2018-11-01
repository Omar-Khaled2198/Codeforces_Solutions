#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x,mm;
    cin>>n;
    map<long long,long long>m;
    for(long i=1;i<=n;i++)
    {
        cin>>x;
        m.insert(pair<long long,long long>(x,i));
    }
    cin>>mm;
    unsigned long long p=0,v=0,l;
    for(long i=0;i<mm;i++)
    {
        cin>>l;
        v+=m[l]-1+1;
        p+=n-m[l]+1;
    }
    cout<<v<<" "<<p<<endl;
}