#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;bool stop=false;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='a'){if(stop==true)break;else continue;}
      else
      {
          s[i]=int(s[i])-1;stop=true;
      }
  }
  if(stop==false)s[s.size()-1]='z';
  cout<<s<<endl;
}

