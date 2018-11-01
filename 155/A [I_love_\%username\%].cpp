#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,l=0,m=0,c=0;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
	   cin>>x;
	   v.push_back(x);
	   if(i==0)continue;
	   else
	   {
		   for(int y=0;y<v.size()-1;y++)
		   {
			   if(x<v[y])
				   l++;
			   if(x>v[y])
				   m++;

		   }
		   if(l==v.size()-1||m==v.size()-1)
			   c++;
	   }
	   l=0;m=0;
   }
   cout<<c<<endl;
}
