#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   unsigned long long a[n],sum1[n+1],sum2[n+1];
   sum1[0]=sum2[0]=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(i==0)sum1[i+1]=a[i];
       else
           sum1[i+1]=sum1[i]+a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       if(i==0)sum2[i+1]=a[i];
       else
        sum2[i+1]=sum2[i]+a[i];
   }
   int s,t,l,r;
   cin>>s;
   for(int i=0;i<s;i++)
   {
       cin>>t>>l>>r;
       if(t==1)cout<<sum1[r]-sum1[l-1]<<endl;
       else cout<<sum2[r]-sum2[l-1]<<endl;
   }


}
