#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,y;
  cin>>n;
  int h[n],v[n];vector<int>f;
  fill(h,h+n,0);fill(v,v+n,0);n*=n;
  for(int i=0;i<n;i++)
  {
      cin>>x>>y;
      if(h[x-1]==0&&v[y-1]==0)
      {
            f.push_back(i+1);
            h[x-1]=1;v[y-1]=1;
      }
  }
  for(int i=0;i<f.size();i++)cout<<f[i]<<" ";
}

