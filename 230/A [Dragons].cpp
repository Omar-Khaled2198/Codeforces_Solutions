#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int x,y,t,n;
   scanf("%d %d",&n,&t);
   vector<int>v1,v2,v3,v4;bool c=false;
   for(int i=0;i<t;i++)
   {
	   scanf("%d %d",&x,&y);
	   v1.push_back(x);
	   v3.push_back(x);
	   v2.push_back(y);
	   v4.push_back(y);
   }
   sort(v3.begin(),v3.end());
   for(int i=0;i<v3.size();i++)
   {
	   for(int x=0;x<v1.size();x++)
	   {
		   if(v3[i]==v1[x])
		   {
			   v4[i]=v2[x];
			   v1[x]=0;
			   break;
		   }
	   }
   }
   for(int i=0;i<v3.size();i++)
   {
	   if(v3[i]<n)
	   {
		   n+=v4[i];
		   c=true;
	   }
	   else
	   {
		   cout<<"NO"<<endl;
		   c=false;
		   break;
	   }
   }
   if(c==true)
	   cout<<"YES"<<endl;
}
