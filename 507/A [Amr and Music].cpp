#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n,m,sum=0,c=0,l=0;
   cin>>n>>m;
   int a[n],b[n];
   vector<long>v;
   for(int i=0;i<n;i++)
   {
       scanf("%ld",&a[i]);b[i]=a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       sum+=a[i];
       if(sum>m)break;
       v.push_back(a[i]);
   }
   cout<<v.size()<<endl;
   if(v.size()!=0){
   for(int i=0;i<v.size();i++)
   {
       for(int x=0;x<n;x++)
       {
           if(v[i]==b[x])
           {
               cout<<x+1<<" ";
               b[x]=-1;break;
           }
       }
   }}

}
