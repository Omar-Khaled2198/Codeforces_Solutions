#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,c=0;
   cin>>n;
   vector<int>a,b;
   char d[n];
   for(int i=0;i<n;i++)
   {
       cin>>x;
       a.push_back(x);
       b.push_back(i);
       if(i%2==0)d[i]='w';
       else d[i]='c';
   }
   while(c!=1001){
   for(int i=0;i<n;i++)
   {
       if(d[i]=='w')
       {
           if(a[i]+1==n)a[i]=0;
           else a[i]++;
       }
       else
       {
           if(a[i]-1==-1)a[i]=n-1;
           else a[i]--;
       }
   }
   if(a==b){cout<<"YES"<<endl;return 0;}
   c++;
   }
   cout<<"NO"<<endl;

}
