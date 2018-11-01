#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;int n,k,x,m=0,sum=0;
   cin>>s>>k;
   int a[256];
   for(int i='a';i<='z';i++)
   {
       cin>>x;
       a[i]=x;
       m=max(m,x);
   }
   for(int i=0;i<s.size()+k;i++)
   {
       if(i>s.size()-1)sum+=(i+1)*m;
       else sum+=(i+1)*a[s[i]];
   }
   cout<<sum<<endl;
}
