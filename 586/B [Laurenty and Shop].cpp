#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum=0;
   cin>>n;
   int r1[n-1],r2[n-1],rev[n];
   vector<int>v,c1,c2,re;
   for(int i=0;i<n-1;i++)cin>>r1[i];
   for(int i=0;i<n-1;i++)cin>>r2[i];
   for(int i=0;i<n;i++)cin>>rev[i];
   c1.push_back(0);c2.push_back(0);
   for(int i=n-2;i>=0;i--)
   {
       c1.push_back(r1[i]);
       c2.push_back(r2[i]);
   }
   for(int i=n-1;i>=0;i--)
   {
       re.push_back(rev[i]);
   }
   for(int i=0;i<c2.size();i++)
   {
       for(int l=0;l<=i;l++)sum+=c2[l];
       sum+=re[i];
       for(int x=i+1;x<c1.size();x++)
       {
           sum+=c1[x];
       }
       v.push_back(sum);
       sum=0;
   }
   sort(v.begin(),v.end());
   cout<<v[0]+v[1]<<endl;
}
