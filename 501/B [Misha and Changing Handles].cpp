#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;string a,b;bool c=false;
   cin>>n;
   vector<string>v1,v3;
   map<string,string>m;
   map<string,string>::iterator it;
   for(int i=0;i<n;i++)
   {
	   cin>>a>>b;
	   for(int x=0;x<v3.size();x++)
	   {
		   if(a==v3[x]){v3[x]=b;c=true;break;}
	   }
	   if(c!=true){v1.push_back(a);v3.push_back(b);}
	   else c=false;
   }
   cout<<v1.size()<<endl;
   for(int i=0;i<v1.size();i++)m.insert(pair<string,string>(v1[i],v3[i]));
   for(it=m.begin();it!=m.end();it++)cout<<it->first<<" "<<it->second<<endl;

}

