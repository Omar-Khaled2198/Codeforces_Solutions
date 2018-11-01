#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;string s,a,b,f="";
   cin>>n>>m;
   map<string,string>l;
   for(int i=0;i<m;i++){cin>>a>>b;l.insert(pair<string,string>(a,b));}
   for(int i=0;i<n;i++){cin>>s;if(s.size()<=l[s].size())f+=s+' ';else f+=l[s]+' ';}
   cout<<f<<endl;
}

