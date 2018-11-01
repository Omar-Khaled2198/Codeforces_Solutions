#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,s1=0,s2=0;string s;bool c=false;
  cin>>n>>s;
  for(int i=0;i<n;i++)
    if(s[i]!='4'&&s[i]!='7')
        {cout<<"NO"<<endl;c=true;break;}
  if(c==false)
  {
      for(int i=0;i<n/2;i++)s1+=s[i]-'0';
      for(int i=n/2;i<n;i++)s2+=s[i]-'0';
      if(s1==s2)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
