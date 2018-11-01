#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,count=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   while(true)
   {
       if(count%2==0){
       for(int i=0;i<n;i++)
       {
           if(a[i]<=c&&a[i]!=-1)
           {
               c++;a[i]=-1;
           }
       }}
       else
       {
           for(int i=n-1;i>=0;i--)
       {
           if(a[i]<=c&&a[i]!=-1)
           {
               c++;a[i]=-1;
           }
       }}
       if(c==n)break;
       count++;
   }
   cout<<count<<endl;
}
