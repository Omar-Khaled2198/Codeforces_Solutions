#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c,m=0;
   cin>>n>>c;
   int a[n];
   for(int i=0;i<n;cin>>a[i],i++);
   for(int i=0;i<n-1;i++)
   {
       m=max(m,a[i]-a[i+1]-c);
   }
   cout<<m<<endl;

}
