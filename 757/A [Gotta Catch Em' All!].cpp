#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  int a[256];
  fill(a,a+256,0);
  for(int i=0;i<s.size();i++)
  {
      a[s[i]]++;
  }
  vector<int>v;
  v.push_back(a['a']/2);
  v.push_back(a['u']/2);
  v.push_back(a['B']);
  v.push_back(a['l']);
  v.push_back(a['r']);
  v.push_back(a['s']);
  v.push_back(a['b']);
  cout<<*min_element(v.begin(),v.end())<<endl;
}
