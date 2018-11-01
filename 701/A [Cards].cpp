#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,x,ind1,ind2;
   cin>>n;vector<int>v,s;
   for(int i=0;i<n;i++)
   {
	   cin>>x;v.push_back(x);
	   s.push_back(x);
   }
   sort(s.begin(),s.end());
   for(int i=0;i<n/2;i++)
   {
	   for(int m=0;m<n;m++)
	   {
		   if(s[i]==v[m])
		   {
			   ind1=m;v[m]=0;break;
		   }
	   }
	   for(int m=0;m<n;m++)
	   {
		   if(s[n-i-1]==v[m])
		   		   {
		   			   ind2=m;v[m]=0;break;
		   		   }
	   }
	   cout<<ind1+1<<" "<<ind2+1<<endl;
   }
}
