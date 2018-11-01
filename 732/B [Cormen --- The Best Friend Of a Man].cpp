#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,k,c=0;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;cin>>a[i],i++);
   for(int i=0;i<n-1;i++)
   {
	   if(a[i]+a[i+1]<k){c+=k-(a[i]+a[i+1]);a[i+1]+=k-(a[i]+a[i+1]);}
   }
   cout<<c<<endl;
   for(int i=0;i<n;cout<<a[i]<<" ",i++);
}

