#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,h,g,c=0;
   cin>>n;
   vector<int>hh,gg;
   for(int i=0;i<n;i++)
   {
	   cin>>h>>g;
	   hh.push_back(h);gg.push_back(g);
   }
   for(int i=0;i<n;i++)
   {
	   for(int x=0;x<n;x++)
	   {
		   if(hh[i]==gg[x]&&i!=x)
		   {
			   c++;
		   }
	   }
   }
   cout<<c<<endl;
}
