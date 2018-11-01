#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,t,temp="";
  cin>>s>>t;
  long c=0;
  for(int i=0;i<s.size();i++)
  {
      if(t==s.substr(i,t.size()))
      {
          s[i+t.size()-1]='#';c++;
      }
  }
  cout<<c<<endl;
}
