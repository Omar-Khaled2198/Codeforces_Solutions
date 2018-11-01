#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,m=0,t;
   cin>>n;
   int a[n];
   for(int i=0;i<n;cin>>a[i],i++);
   for(int i=0;i<n;i++)
   {
       t=a[i];
       for(int x=i;x>=0;x--)if(t>=a[x]){t=a[x];c++;}else break;
       t=a[i];
       for(int x=i+1;x<n;x++)if(t>=a[x]){t=a[x];c++;}else break;
       m=max(m,c);c=0;
   }
   cout<<m<<endl;
}
