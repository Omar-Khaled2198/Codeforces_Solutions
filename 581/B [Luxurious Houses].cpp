#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   long long a[n],m=0,b[n],c[n];
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=n-1;i>=0;i--)
   {
       m=max(a[i],m);
       b[i]=m;
   }
   for(int i=0;i<n;i++)
   {
        if(a[i]==b[i]&&b[i+1]!=b[i])c[i]=b[i];
        else c[i]=b[i]+1;

   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {

           cout<<abs(a[i]-c[i])<<" ";
   }
}
