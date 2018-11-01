#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
  int n,k,x;
  cin>>n>>k;
  vector<int>v,mini;
  for(int i=0;i<k;i++)
  {
	  cin>>x;v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<=v.size()-n;i++)
  {
	  mini.push_back(v[i+n-1]-v[i]);
  }
  cout<<*min_element(mini.begin(),mini.end())<<endl;
}
