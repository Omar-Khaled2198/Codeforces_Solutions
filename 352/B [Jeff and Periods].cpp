#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,x,c=0,p=1;
   cin>>n;
   map<long,int>occ;
   map<long,int>deff;
   map<long,int>ind;
   map<long,int>::iterator it;
   for(int i=1;i<=n;i++)
   {
       scanf("%I64d",&x);
       if(occ[x]>=0)occ[x]++;
       else
       {
           occ.insert(pair<long,int>(x,1));
       }
      ind.insert(pair<long,int>(x,i));
      deff.insert(pair<long,int>(x,0));
      if(occ[x]==2)
      {
          deff[x]=i-ind[x];
          ind[x]=i;
      }
      else if(occ[x]>2)
      {
          if(i-ind[x]==deff[x])
          {
              ind[x]=i;
          }
          else {deff[x]=-1;}
      }
   }
   occ.clear();
   for(it=deff.begin();it!=deff.end();it++)
   {
       if(it->second!=-1)
         occ.insert(pair<long,int>(it->first,it->second));
   }
   cout<<occ.size()<<endl;;
   for(it=occ.begin();it!=occ.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }
}
