#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,m,t,sum=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>m;
       for(int x=0;x<=floor(log2(m));x++)
       {
           sum+=pow(2,x);
       }
       cout<<(((m*(m+1))/2)-sum)-sum<<endl;
       sum=0;
   }
}
