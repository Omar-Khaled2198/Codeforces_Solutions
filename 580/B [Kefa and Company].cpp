#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,d,x,y,m=0,in=0,sum=0;
   cin>>n>>d;
   vector<pair<long,long> >v;
   long long a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%lld %lld",&x,&y);
       v.push_back(make_pair(x,y));
   }
   sort(v.begin(),v.end());
   a[0]=v[0].second;
   m=a[0];
   for(int i=1;i<n;i++)
   {
       if(abs(v[in].first-v[i].first)<d)a[i]=a[i-1]+v[i].second;
       else
       {
           sum=a[i-1];
           while(true)
           {
               if(abs(v[in].first-v[i].first)<d)
               {
                   a[i]=sum+v[i].second;
                   break;
               }
               else
               {
                   sum-=v[in].second;
               }
               in++;
           }
       }
       m=max(m,a[i]);
   }
   cout<<m<<endl;


}
