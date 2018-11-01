#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,count=0;
   cin>>n;
   int a[6000],b[n];
   fill(a,a+6000,0);
   for(int i=0;i<n;i++)
   {
       cin>>b[i];
       a[b[i]]++;
   }
   for(int i=0;i<n;i++)
   {
       if(a[b[i]]>1)
       {
           for(int x=b[i];x<6000;x++)
           {
               if(a[x]==0)
               {
                   a[b[i]]--;
                   a[x]++;
                   count+=abs(x-b[i]);
               }
               if(a[b[i]]==1)break;
           }
       }
   }
   cout<<count<<endl;

}
