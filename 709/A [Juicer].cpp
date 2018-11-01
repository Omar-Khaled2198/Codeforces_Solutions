#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,b,d,c=0,sum=0,count=0;
  cin>>n>>b>>d;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++)
  {
      if(a[i]<=b)
      {
          sum+=a[i];
      }
      if(sum>d)
      {
          sum=0;c++;
      }
  }
  cout<<c<<endl;

}

