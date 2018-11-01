#include <bits/stdc++.h>

using namespace std;

int main()
{
    long k,l,m,n,d;
    set<long>s;
    cin>>k>>l>>m>>n>>d;
    for(int i=k;i<=d;i+=k)s.insert(i);
    for(int i=l;i<=d;i+=l)s.insert(i);
    for(int i=m;i<=d;i+=m)s.insert(i);
    for(int i=n;i<=d;i+=n)s.insert(i);
    cout<<s.size()<<endl;
}