#include <bits/stdc++.h>

using namespace std;

int main()
{
  long n,x,c=0;
  cin>>n;
  vector<long>v;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      v.push_back(x);
  }
  for(int i=0;i<n;i++)
  {
      for(int x=0;x<n-1;x++)
      {
          if(v[x]>v[x+1])
          {
              cout<<x+1<<" "<<x+2<<endl;
              swap(v[x],v[x+1]);
          }
      }
  }
}
