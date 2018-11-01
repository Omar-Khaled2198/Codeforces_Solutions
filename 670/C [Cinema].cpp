#include <bits/stdc++.h>

using namespace std;

long max(long x,long y)
{
    if(x>y)return x;
    else return y;
}

int main()
{
  long n,x,y,num,MAX1=0,MAX2=0,index=0;
  cin>>n;
  map<long,long>m;
  map<long,long>::iterator it;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      it=m.find(x);
      if (it == m.end())
      {
          m.insert(pair<long,long>(x,1));
      }
      else m[x]++;
  }
  cin>>num;
  vector<long>v1,v2;
  for(int i=0;i<num;i++)
  {
      cin>>x;
      it=m.find(x);
      if (it != m.end())
      {
          if(MAX1<m[x])
          {
              MAX1=m[x];
              index=i;
          }
      }
      v1.push_back(x);
  }
  for(int i=0;i<num;i++)
  {
      cin>>y;
      v2.push_back(y);
  }
  for(int i=0;i<num;i++)
  {
      it=m.find(v1[i]);
      if (it != m.end())
      {
          if(MAX1==m[v1[i]]){
          if (it != m.end())
          {
              if(MAX2<m[v2[i]]&&MAX1==m[v1[i]])
              {
                  MAX2=m[v2[i]];
                  index=i;
              }
          }
          }
      }
      else
      {
          m.insert(pair<long,long>(v1[i],0));
          if(MAX1==m[v1[i]]){
          if (it != m.end())
          {
              if(MAX2<m[v2[i]]&&MAX1==m[v1[i]])
              {
                  MAX2=m[v2[i]];
                  index=i;
              }
          }

      }
      }
  }
  cout<<index+1<<endl;

}
