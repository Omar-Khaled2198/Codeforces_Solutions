#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,p,c=0,x;
   cin>>n;
   cin>>p;
   for(int i=1;i<n;i++)
   {
       scanf("%I64d",&x);
       if(x<p)c+=p-x;
       p=x;
   }
   cout<<c<<endl;
}
