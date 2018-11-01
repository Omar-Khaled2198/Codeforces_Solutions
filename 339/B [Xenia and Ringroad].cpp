#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,m,x;
   cin>>n>>m;
   long long sum=0,t=1;
   for(int l=0;l<m;l++)
   {
	   cin>>x;
	   if(x>t)
	   {
		   sum+=x-t;
		   t=x;
	   }
	   else if(x<t)
	   {
		   sum+=n-(t-x);
		   t=x;
	   }
   }
   cout<<sum<<endl;
}
