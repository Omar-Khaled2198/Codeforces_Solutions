#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0;
   cin>>n;
   char a[n][n];
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           a[i][x]='.';
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           if(a[i][x]!='/')
           {
               a[i][x]='C';c++;
               if(i-1>=0)a[i-1][x]='/';
               if(i+1<n)a[i+1][x]='/';
               if(x-1>0)a[i][x-1]='/';
               if(x+1<n)a[i][x+1]='/';
           }
       }
   }
   cout<<c<<endl;
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           if(a[i][x]=='/')a[i][x]='.';
           cout<<a[i][x];
       }
       cout<<endl;
   }
}
