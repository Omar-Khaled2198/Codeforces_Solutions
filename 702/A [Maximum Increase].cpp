#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,x,t=0,c=0,m=0;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]<arr[i+1])
       {
           t=arr[i];c++;m=max(m,c);
       }
       else
       {
           t=0;c=0;
       }
   }
   cout<<m+1<<endl;

}
