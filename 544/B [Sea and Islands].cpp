#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,k,c=0;
  cin>>n>>k;
  char a[n][n];
  for(int i=0;i<n;i++)
  {
      for(int x=0;x<n;x++)
        a[i][x]='L';
  }
  for(int i=0;i<n;i++)
  {
      for(int x=0;x<n;x++)
      {
          if(c==k){a[i][x]='S';}
          else if(a[i][x]!='S')
           {
               a[i][x]='L';c++;
               if(i-1>=0)a[i-1][x]='S';
               if(i+1<n)a[i+1][x]='S';
               if(x-1>=0)a[i][x-1]='S';
               if(x+1<n)a[i][x+1]='S';
           }
      }
  }
  if(c!=k)cout<<"NO"<<endl;
  else
  {
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           cout<<a[i][x];
       }
       cout<<endl;
   }
  }
}
