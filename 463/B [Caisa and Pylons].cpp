#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,m=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
	   cin>>x;
	   m=max(x,m);
   }
   cout<<m<<endl;
}
