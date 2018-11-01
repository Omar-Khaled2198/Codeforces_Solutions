#include <bits/stdc++.h>

using namespace std;

int main()
{
  int k;bool c=true;
  cin>>k;
  k*=2;
  int n[10];char a;
  fill(n,n+10,0);
  for(int i=0;i<4;i++)
  {
      for(int x=0;x<4;x++)
      {
          cin>>a;
          if(a!='.')n[a-'0']++;
      }
      for(int i=1;i<10;i++)if(n[i]>k)c=false;
  }
  if(c==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
