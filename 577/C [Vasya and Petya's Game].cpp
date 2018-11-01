#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool prime[1002];
    fill(prime,prime+1001,1);
    prime[1]=0;
    for(int i=2;i*i<=1001;i++)
    {
        if(prime[i]==1)
        {
            for(int x=2*i;x<=1001;x+=i)
            {
                prime[x]=0;
            }
        }
    }
    long long l;
    for(int i=2;i<1001;i++)
    {
        l=i;
        if(prime[l]==1)
        {
            for(int x=1;x<1001;x++)
            {
                l=pow(i,x);
                if(l>1001)break;
                else prime[l]=1;
            }
        }
    }
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==1)v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}