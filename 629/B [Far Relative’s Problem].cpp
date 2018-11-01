#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,y,MAX=0;char ch;
   cin>>n;
   vector<pair<int,int> >v(367);
   for(int i=0;i<367;i++)
   {
       v[i].first=0;v[i].second=0;
   }
   for(int i=0;i<n;i++)
   {
       cin>>ch>>x>>y;
       if(ch=='M')for(int l=x;l<=y;l++)v[l].first++;
       else for(int l=x;l<=y;l++)v[l].second++;
   }
   for(int i=0;i<367;i++)
   {
       MAX=max(MAX,min(v[i].first,v[i].second));
   }
   cout<<2*MAX<<endl;



}
