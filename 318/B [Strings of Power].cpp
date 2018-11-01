#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,t1="heavy",t2="metal";
  cin>>s;long long c=0,sum=0;
  for(int i=0;i<s.size();i++)
  {
      if(s.substr(i,5)==t1){c++;}
      if(s.substr(i,5)==t2){sum+=c;}
  }
  cout<<sum<<endl;
}
