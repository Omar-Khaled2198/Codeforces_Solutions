#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c,x,m;
   cin>>n>>c>>m;
   vector<pair<int,int> >v;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(make_pair(abs(i-(c-1))*10,x));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
       if(v[i].second<=m&&v[i].second!=0)
       {
           cout<<v[i].first;
           return 0;
       }
   }
}
