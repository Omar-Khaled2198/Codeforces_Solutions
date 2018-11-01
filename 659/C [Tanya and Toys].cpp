#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n,m,x;
  cin>>n>>m;
  vector<long long>v;
  map<long long ,int>ma;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      ma.insert(pair<long long,int>(x,1));
  }
  for(int i=1;i<=1000000000;i++)
  {
      if(m<i)break;
      else
      {
          if(ma[i]!=1&&m-i>=0)
          {
              v.push_back(i);
              m-=i;
          }
      }
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

}
