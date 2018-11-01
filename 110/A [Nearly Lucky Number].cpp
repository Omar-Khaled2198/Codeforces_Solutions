#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,t;long c=0;
   cin>>s;
   for(int i=0;i<s.size();i++)if(s[i]=='7'||s[i]=='4')c++;
   stringstream ss;
   ss<<c;
   t=ss.str();
   c=0;
   for(int i=0;i<t.size();i++)if(t[i]=='7'||t[i]=='4')c++;
   if(c==t.size())
       cout<<"YES"<<endl;
   else
       cout<<"NO"<<endl;
}
