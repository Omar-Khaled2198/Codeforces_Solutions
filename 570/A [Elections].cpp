#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,x,Max=0,c=0,t=0,in=0;
  cin>>n>>m;
  int a[n];
  fill(a,a+n,0);
  vector<int>v;
  for(int i=0;i<m;i++)
  {
      for(int i=0;i<n;i++)
      {
          cin>>x;v.push_back(x);
          if(Max<x){Max=x;}
      }
      for(int l=0;l<n;l++)if(Max==v[l]){in=l;break;}
      v.clear();
      a[in]++;Max=0;
      if(c<a[in])c=a[in];
  }
  for(int i=0;i<n;i++)if(a[i]==c){t=i;break;}
  cout<<t+1<<endl;
}
