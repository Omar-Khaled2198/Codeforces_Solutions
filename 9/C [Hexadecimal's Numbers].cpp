#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,x=1,o=1,c=0;
   vector<long long>on,z;
   on.push_back(x);
   z.push_back(x);
   cin>>n;
   int len=log10(n)+1;
   for(int i=1;i<len;i++)
   {
	   x*=10;o*=10;
	   o++;
	   z.push_back(x);
	   on.push_back(o);
   }
   while(true)
   {
	   if(n>on[int(log10(n))])
	   {
		   c+=pow(2,int(log10(n)+1))-1;
		   cout<<c;break;
	   }
	   else if(n==z[int(log10(n))])
	   {
		   c+=pow(2,int(log10(n)));
		   cout<<c;break;
	   }
	   else if(n>z[int(log10(n))])
	   {
		   c+=pow(2,int(log10(n)));
		   n-=z[int(log10(n))];
	   }
	   else break;
   }
}
