#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,k,c=0;
    cin>>n>>k;
    set<unsigned long long>s;
    set<unsigned long long>::iterator it;
    for(unsigned long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(it=s.begin();it!=s.end();it++)
    {
        if(c==k-1){cout<<*it<<endl;return 0;}
        else c++;
    }
    cout<<-1<<endl;
}
