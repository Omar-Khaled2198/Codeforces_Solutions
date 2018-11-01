#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n,c=0,x,m=1;
   cin>>n;
   long a[n];
   if(n<2)cout<<1<<endl;
   else{
   cin>>a[0]>>a[1];c=m=2;
   for(int i=2;i<n;i++)
   {
       cin>>x;
       a[i]=x;
       if(a[i]==a[i-1]+a[i-2]){c++;m=max(m,c);}
       else
       {
           c=2;continue;
       }
   }
   cout<<m<<endl;}
}

