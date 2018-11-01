#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
  int n,x;
  cin>>n;bool c=false;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
	  cin>>x;
	  v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
	  if(v[i]!=i+1)
	  {
		  cout<<i+1<<endl;
		  c=true;
		  break;
	  }
  }
  if(c==false)
	  cout<<v[v.size()-1]+1<<endl;
}
