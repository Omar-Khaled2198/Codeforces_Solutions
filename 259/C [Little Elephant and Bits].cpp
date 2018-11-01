#include <bits/stdc++.h>

using namespace std;


int main()
{
  string s;bool check=false;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='0')
        {s.erase(s.begin()+i);check=true;break;}
  }
  if(check==false)
  {
      s.erase(s.begin()+1);
  }
  cout<<s<<endl;
}
