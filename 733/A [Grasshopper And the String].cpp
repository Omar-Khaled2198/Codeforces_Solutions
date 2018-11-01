#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;int c=0,m=0;
   cin>>s;
   vector<int>v;
   v.push_back(0);
   for(int i=0;i<s.size();i++)
   {
	   if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')v.push_back(i+1);
   }
   v.push_back(s.size()+1);
   if(v.size()==1)cout<<1+s.size()<<endl;
   else{
   for(int i=0;i<v.size()-1;i++){m=max(v[i+1]-v[i],m);}cout<<m<<endl;
   }
}
