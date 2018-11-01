#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long n,f=4,s=7;
    cin>>n;
    int size=floor(log10(n))+1;
    vector<long>v;
    v.push_back(f);
    v.push_back(s);
    for(int i=0;i<size;i++)
    {
        f*=10;
        s*=10;
        for(int x=0;x<v.size();x++)
        {
            if(floor(log10(v[x]))+1==floor(log10(f)))
            {
                v.push_back(f+v[x]);
                v.push_back(s+v[x]);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(n==v[i])
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}