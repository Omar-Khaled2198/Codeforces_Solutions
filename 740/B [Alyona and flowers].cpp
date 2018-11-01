#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,l,r,c=0,s=0;
    cin>>n>>m;
    int a[n],co[n];
    vector<int>v;
    fill(co,co+n,0);
    for(int i=0;i<n;cin>>a[i],i++);
    for(int i=0;i<m;i++)
    {
    	cin>>l>>r;
    	for(int x=l-1;x<=r-1;x++)co[x]++;
    	for(int x=0;x<n;x++)s+=co[x]*a[x];
    	v.push_back(s);
    	fill(co,co+n,0);
    	s=0;
    }
    for(int i=0;i<m;i++)c+=max(0,v[i]);
    cout<<c<<endl;
}


