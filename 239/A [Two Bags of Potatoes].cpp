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
   long long n,k,y,f=0;
   cin>>y>>k>>n;
   if(y>=k)
   {
	   if(y%k!=0)
	   {
		   f=k-(y%k);
	   }
	   else
	   {
		   f=k;
	   }
	   if(f+y>n||(f+y)%k!=0)
		   cout<<-1<<endl;
	   else
		   while(f+y<=n)
		   {
			   cout<<f<<" ";
			   f+=k;
		   }
   }
   else
   {
	   f=k-y;
	   if(f+y>n)
		   cout<<-1<<endl;
	   else{
	   while(f+y<=n)
	   {
		   cout<<f<<" ";
		   f+=k;
	   }}
   }
}
