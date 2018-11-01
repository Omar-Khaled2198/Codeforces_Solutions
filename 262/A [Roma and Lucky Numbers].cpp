#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int n,k,c=0,fc=0;
   cin>>n>>k;
   string s;
   for(int i=0;i<n;i++)
   {
	   cin>>s;
	   for(int i=0;i<s.size();i++)
	   {
		   if(s[i]=='4'||s[i]=='7')
		   {
			   c++;
		   }
	   }
	   if(c<=k)
		   fc++;
	   c=0;
   }
   cout<<fc<<endl;
}
