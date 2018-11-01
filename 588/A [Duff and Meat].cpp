#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int n,x,y,mini=0,sum=0;bool c=false;
   vector<int>a,p;
   cin>>n;
   for(int i=0;i<n;i++)
   {
	   cin>>x>>y;
	   a.push_back(x);p.push_back(y);
   }
   mini=p[0];
   for(int i=0;i<n;i++)
   {
	   if(mini>p[i])
	   {
		   mini=p[i];
	   }
	   else if(mini<p[i])
	   {
		   p[i]=mini;
	   }
   }
   for(int i=0;i<n;i++)
   {
	   sum+=a[i]*p[i];
   }
   cout<<sum<<endl;
}
