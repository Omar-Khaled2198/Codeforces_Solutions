#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,count=0;
   cin>>n;
   int a[n],b[100001];
   fill(b,b+100001,0);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       b[a[i]]++;
   }
   int x=0;
   for(int i=1;i<=n;i++)
   {
     if(b[i]==0)
     {
         for(;x<n;x++)
         {
             if(b[a[x]]>1||b[a[x]]==1&&a[x]>n)
             {
                 b[a[x]]--;
                 a[x]=i;
                 b[a[x]]++;x++;break;
             }
         }
     }
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }


}
