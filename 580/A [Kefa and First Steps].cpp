#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,c=0,count=0;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]<=arr[i+1])
       {
           c++;count=max(count,c);
       }
       else
       {
           c=0;
       }
   }
   cout<<count+1<<endl;
}
