#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,d,m,x,s=0;
   cin>>n>>d;vector<int>v;
   for(int i=0;i<n;i++)
   {
	   cin>>x;
	   v.push_back(x);
   }
   sort(v.begin(),v.end());
   cin>>m;
   for(int i=0;i<n;i++)
   {
	   s+=v[i];m--;if(m==0)break;
   }
   cout<<s-m*d<<endl;
}
