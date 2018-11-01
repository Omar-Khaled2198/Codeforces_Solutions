#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  if(n<=4)
  {
      if(n==1||n==2)cout<<1<<endl<<1<<endl;
      else if(n==3)cout<<2<<endl<<1<<" "<<3<<endl;
      else if(n==4)cout<<4<<endl<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
  }
  else{
  vector<int>v;
  int a[n+2];fill(a,a+n+2,0);
  v.push_back(1);a[1]=1;
  while(v.size()!=n)
  {
      for(int i=1;i<=n;i++)
      {
          if(max(v[v.size()-1],i)-min(v[v.size()-1],i)>1&&a[i]==0)
          {
            v.push_back(i);a[i]=1;
          }
      }
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";}

}
