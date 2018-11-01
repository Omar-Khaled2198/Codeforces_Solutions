#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long k;
  cin>>k;
  if(k==0)cout<<1<<endl;
  else if(k%4==1)cout<<8<<endl;
  else if(k%4==2)cout<<4<<endl;
  else if(k%4==3)cout<<2<<endl;
  else if(k%4==0)cout<<6<<endl;
}
