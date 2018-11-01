#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,h,c=0;
   cin>>n;
   vector<pair<long long,long long> >v;
   v.push_back(make_pair(-2000000000,0));
   for(int i=0;i<n;i++)
   {
       cin>>x>>h;
       v.push_back(make_pair(x,h));

   }
   v.push_back(make_pair(2000000001,0));
   for(int i=0;i<n;i++)
   {
       if(v[i].first-v[i].second>v[i-1].first)c++;
       else if(v[i].first+v[i].second<v[i+1].first){c++;v[i].first+=v[i].second;}
   }
   cout<<c<<endl;
}
