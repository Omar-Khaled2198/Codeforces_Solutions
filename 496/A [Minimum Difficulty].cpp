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
  long n,in,maxi=0;
  vector<long>v,mini;
  cin>>n;
  for(int i=0;i<n;i++)
  {
	  cin>>in;v.push_back(in);
  }
  for(int i=1;i<v.size()-1;i++)
  {
	  maxi=v[i+1]-v[i-1];
	  for(int x=i-1;x>=0;x--)
	  {
		 if(v[x]-v[x-1]>maxi)
		 {
			 maxi=v[x]-v[x-1];
		 }
	  }
	  for(int x=v.size()-1;x>=i+1;x--)
	  {
	  	  if(v[x]-v[x-1]>maxi)
	  	  {
	  	   maxi=v[x]-v[x-1];
	  	  }
	  }
	  mini.push_back(maxi);
  }
  cout<<*min_element(mini.begin(),mini.end())<<endl;
}
