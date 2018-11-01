#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,c=1;
  cin>>n;
  for(int i=1;i<=n/2;i++)
  {
     for(int x=0;x<=(n/2-i);x++)cout<<'*';
     for(int x=0;x<c;x++)cout<<'D';
     for(int x=0;x<=(n/2-i);x++)cout<<'*';
     cout<<endl;c+=2;
  }
  c-=2;
  for(int i=0;i<n;i++)cout<<'D';
  cout<<endl;
  for(int i=n/2;i>=1;i--)
  {
     for(int x=0;x<=(n/2-i);x++)cout<<'*';
     for(int x=0;x<c;x++)cout<<'D';
     for(int x=0;x<=(n/2-i);x++)cout<<'*';
     cout<<endl;c-=2;
  }

}
