#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
      if(i==0)
      {
          if(s[i]-'0'>9-(s[i]-'0')&&9-(s[i]-'0')!=0&&s.size()>1)
            cout<<9-(s[i]-'0');
          else
            cout<<s[i];
      }
      else if(s[i]-'0'>=9-(s[i]-'0'))
      {
          if(9-(s[i]-'0')==0&&s.size()==1)
          {
              cout<<s[i];
          }
          else
            cout<<9-(s[i]-'0');
      }
        else
        cout<<s[i];
  }
}

