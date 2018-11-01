#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,m=0,sum=0,d=1;
  cin>>n>>a;a--;
  int c[n];
  for(int i=0;i<n;i++)cin>>c[i];
  if(c[a]==1)sum++;
  if(n==1){cout<<c[0]<<endl; return 0;}
  while(true)
  {
      if(a+d<n&&a-d>=0)sum+=min(c[a+d],c[a-d])*2;
      else if(a+d<n&&c[a+d]==1){sum++;}
      else if(a-d>=0&&c[a-d]==1)sum++;
      d++;
      if(d==n)break;
  }
  cout<<sum<<endl;

}
