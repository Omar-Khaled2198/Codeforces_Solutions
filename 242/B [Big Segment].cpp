#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n,x,y,l=1000000001,r=0;
   cin>>n;
   vector<pair<long,long> >v;
   for(int i=0;i<n;i++)
   {
       cin>>x>>y;
       l=min(l,x);
       r=max(r,y);
       v.push_back(make_pair(x,y));
   }
   for(int i=0;i<n;i++)
   {
       if(v[i].first==l&&v[i].second==r)
       {
           cout<<i+1<<endl;return 0;
       }
   }
   cout<<-1<<endl;
}
