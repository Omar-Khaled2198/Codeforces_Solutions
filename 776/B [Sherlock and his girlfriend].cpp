#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    bool prime[100001];
    fill(prime,prime+100001,1);
    prime[1]=0;
    for(int i=2;i*i<=100001;i++)
    {
        if(prime[i]==1)
        {
            for(int x=2*i;x<=100001;x+=i)
            {
                prime[x]=0;
            }
        }
    }
    long long n,x;
    vector<int>v;
    cin>>n;
    set<int>s;
    for(int i=2;i<=n+1;i++)
    {
        if(prime[i]==0){s.insert(2);v.push_back(2);}
        else {s.insert(1);v.push_back(1);}
    }
    cout<<s.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
