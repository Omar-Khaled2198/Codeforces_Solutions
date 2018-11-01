#include <bits/stdc++.h>

using namespace std;


int main()
{
   string s1,s2;bool ch=false;
   getline(cin,s1);
   getline(cin,s2);
   int c[256];fill(c,c+256,0);
   for(int i=0;i<s1.size();i++)
   {
       if(s1[i]!=' ')c[s1[i]]++;
   }
   for(int i=0;i<s2.size();i++)
   {
       if(s2[i]!=' ')
       {
           if(c[s2[i]]>0)c[s2[i]]--;
           else ch=true;
       }
   }
   if(ch==true)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
