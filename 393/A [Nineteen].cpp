#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   string str="niet",t="";
   int c[265];fill(c,c+265,0);
   for(int i=0;i<s.size();i++)
   {
       c[s[i]]++;
   }
   int m=101;
   if(c[str[0]]!=0&&c[str[1]]!=0&&c[str[2]]!=0&&c[str[3]]!=0)
   {m=min(m,c[str[0]]/2);
   m=min(m,c[str[1]]/1);
   m=min(m,c[str[2]]/3);
   m=min(m,c[str[3]]/1);
   if(c[str[0]]/2==m&&c[str[0]]%2==0)m--;
   cout<<m<<endl;}
   else
    cout<<0<<endl;
}
   
