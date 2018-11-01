#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,y;
   cin>>n;
   int a[n+2];
   for(int i=1;i<=n;i++)cin>>a[i];
   cin>>x>>y;
   if(x>y)swap(x,y);
   int sum1=0,sum2=0;
   for(int i=x;i<y;i++)sum1+=a[i];
   for(int i=y;i<=n;i++)sum2+=a[i];
   for(int i=1;i<x;i++)sum2+=a[i];
   cout<<min(sum1,sum2)<<endl;
}
