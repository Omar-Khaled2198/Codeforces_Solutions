#include <bits/stdc++.h>

using namespace std;
int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
   int n,x,k,c=0;vector<int>v,vv;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
	   cin>>x;v.push_back(x);
	   vv.push_back(x);
   }
   sort(vv.begin(),vv.end());
   int a=vv[vv.size()-k];
   cout<<a<<endl;
   for(int i=0;i<n;i++)
   {
	   if(v[i]>=a&&c<k){
		   cout<<i+1<<" ";c++;}
   }
}
