#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,k,c=0;
   cin>>n>>m>>k;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)m>0?m--:c++;
       else if(a[i]==2)
       {
           if(k>0)k--;
           else if(m>0)m--;
           else c++;
       }
   }
   cout<<c<<endl;
}
