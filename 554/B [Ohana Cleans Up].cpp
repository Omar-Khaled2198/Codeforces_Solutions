#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,m=0;string s;
   cin>>n;
   vector<string>v;
   for(int i=0;i<n;i++)
   {
       cin>>s;
       v.push_back(s);
   }
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           if(v[i]==v[x])
           {
               c++;
           }
       }
       m=max(m,c);
       c=0;
   }
   cout<<m<<endl;

}
