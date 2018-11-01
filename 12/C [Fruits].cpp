#include <bits/stdc++.h>

using namespace std;
int main()
{
   map<string,int>m;
   map<string,int>::iterator it;
   int n,mm,x,sum=0;string s;
   vector<int>v,vec;
   cin>>n>>mm;
   for(int i=0;i<n;i++)
   {
       cin>>x;vec.push_back(x);
   }
   sort(vec.begin(),vec.end());
   for(int i=0;i<mm;i++)
   {
       cin>>s;
       if(m[s]>=0)m[s]++;
       else m.insert(pair<string,int>(s,0));
   }
   for(it=m.begin();it!=m.end();it++)
   {
       v.push_back(it->second);
   }
   sort(v.rbegin(),v.rend());
   for(int i=0;i<m.size();i++)
   {
       sum+=v[i]*vec[i];
   }
   cout<<sum<<" ";sum=0;
   reverse(vec.begin(),vec.end());
   for(int i=0;i<m.size();i++)
   {
       sum+=v[i]*vec[i];
   }
   cout<<sum<<endl;
}
