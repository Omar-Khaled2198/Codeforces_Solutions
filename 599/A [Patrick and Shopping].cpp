#include <bits/stdc++.h>

using namespace std;

int main()
{
  int d1,d2,d3;
  cin>>d1>>d2>>d3;
  vector<int>v;
  v.push_back(2*d1+2*d2);
  v.push_back(d1+d2+d3);
  v.push_back(2*d1+2*d3);
  v.push_back(2*d2+2*d3);
  cout<<*min_element(v.begin(),v.end());
}

