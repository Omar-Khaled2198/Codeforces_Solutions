#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m=0,sum=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       m=max(m,a[i]);
   }
   for(int i=0;i<n;i++)
   {
       sum+=abs(m-a[i]);
   }
   cout<<sum<<endl;
}
