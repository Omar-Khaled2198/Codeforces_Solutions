#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,a;
   cin>>t;
   for(int i=0;i<t;i++)
   {
	   cin>>a;
	   if(360%(180-a)==0)
		   cout<<"YES"<<endl;
	   else
		   cout<<"NO"<<endl;
   }
}
