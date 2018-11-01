#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,d,c=0,s=0;
  cin>>n>>d;bool ch=false;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      s+=a[i];
      c+=a[i];
      if(c>d)ch=true;
      c+=10;
  }
  if(ch==true)cout<<-1<<endl;
  else
  {
    cout<<(d-s)/5<<endl;
  }

}
