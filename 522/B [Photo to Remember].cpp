#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n,sum=0;
   cin>>n;
   long a[n],b[n];
   vector<long>v;
   for(int i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];sum+=a[i];
       v.push_back(b[i]);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
       if(b[i]==v[v.size()-1])cout<<(sum-a[i])*(v[v.size()-2])<<" ";
       else cout<<(sum-a[i])*(v[v.size()-1])<<" ";
   }
}
