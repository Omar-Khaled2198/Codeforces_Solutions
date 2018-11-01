#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,l;
   cin>>n;
   int a[5001];
   fill(a,a+5001,0);
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       a[x]++;
   }
   for(int i=0;i<5001;i++)
   {
       if(a[i]>0){v.push_back(i);a[i]--;}
   }
   l=v[v.size()-1];
   for(int i=5000;i>0;i--)if(l>i&&a[i]>0){v.push_back(i);a[i]--;}
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

}
