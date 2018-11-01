#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;bool check=false;
   cin>>n;char t;
   char a[n][n];
   set<char>s;
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           cin>>a[i][x];
           s.insert(a[i][x]);
       }
   }
   if(s.size()!=2)cout<<"NO"<<endl;
   else
   {
       for(int i=0;i<n-1;i++)
       {
           if(a[i][i]!=a[i+1][i+1])check=true;
           if(a[i][n-i-1]!=a[i+1][n-i-2])check=true;
       }
       if(check==false)t=a[0][0];
       for(int i=0;i<n;i++)
       {
           for(int x=0;x<n;x++)
           {
               if(a[i][x]==t&&i!=x&&x!=n-i-1)check=true;
           }
       }
       if(check==false)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
}
