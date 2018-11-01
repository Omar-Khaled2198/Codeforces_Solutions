#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,count=1;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)v.push_back(i);
    }
    if(v.size()==0){cout<<0<<endl;return 0;}
    for(int i=0;i<v.size()-1;i++)
    {
        count*=abs(v[i]-v[i+1]);
    }
    cout<<count<<endl;
}