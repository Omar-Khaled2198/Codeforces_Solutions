#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long a,b,s;
  cin>>a>>b>>s;
  if(a<0)a*=-1;if(b<0)b*=-1;
  if(a>s||b>s)cout<<"NO"<<endl;
  else
  {
      if(a+b==s||a+b<s&&(s-a+b)%2==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
