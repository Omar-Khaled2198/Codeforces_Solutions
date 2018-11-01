#include <bits/stdc++.h>

using namespace std;

int main()
{
  unsigned long long n,s,sum=0,l=9,m=1,c=0;
  cin>>n;
  s=floor(log10(n))+1;
  for(int i=1;i<s;i++)
  {
    sum+=l*i;
    l=l*10;
  }
  for(int i=1;i<s;i++)m*=10;
  sum+=(n-(m-1))*s;
  cout<<sum<<endl;
}
