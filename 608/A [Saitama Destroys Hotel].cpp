#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,s,a,b,c=0;
  cin>>n>>s;
  c=max(c,s);
  for(int i=0;i<n;i++)
  {
      cin>>a>>b;
      c=max(c,a+b);
  }
  
  cout<<c<<endl;

}
