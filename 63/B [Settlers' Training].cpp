#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,k,c=0,l,x=0;
   cin>>n>>k;
   map<int,int>m;
   vector<int>v;
   for(int i=1;i<=k;i++)m.insert(pair<int,int>(i,0));
   for(int i=1;i<=n;i++){cin>>l;m[l]++;}
   while(m[k]!=n)
   {
	   for(x=1;x<k;x++)
	   {
		   if(m[x]>0){m[x]--;v.push_back(x+1);}
	   }
	   for(int i=0;i<v.size();i++)m[v[i]]++;
	   v.clear();
	   c++;
   }
   cout<<c<<endl;
}
