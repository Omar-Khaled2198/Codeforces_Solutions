#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,d,x=0;bool c=false;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n-1;cin>>a[i],i++);
  for(int i=0;i<n-1;i++)
  {
      if(i+a[i]<=n-1)
      {
          x=x+a[x];
          if(x==d-1){c=true;break;}
          else if(x>d-1){break;}
      }
      else break;
  }
  if(c==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

