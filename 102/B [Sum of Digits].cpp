#include <bits/stdc++.h>

using namespace std;

int main()
{
      string s;unsigned long long c=0,count=0;
      cin>>s;
      stringstream st;
      while(s.size()!=1)
      {
          st.str(string());
           for(int i=0;i<s.size();i++)c+=s[i]-'0';
           st<<c;
           s=st.str();
           c=0;
           count++;
      }
      cout<<count<<endl;
}
