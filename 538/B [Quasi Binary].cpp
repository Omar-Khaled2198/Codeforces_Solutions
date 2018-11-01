#include <bits/stdc++.h>

using namespace std;


int main()
{
   long n;string t,s="",temp="";
   cin>>n;
   int size=floor(log10(n))+1;
   stringstream st;
   st<<n;
   t=st.str();
   for(int i=0;i<size;i++)s+="0";
   vector<string>v;
   while(t!=s)
   {
       for(int i=0;i<size;i++)
       {
           if(t[i]!='0'){temp+='1';t[i]=t[i]-1;}
           else temp+='0';
       }
       v.push_back(temp);
       temp="";
   }
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++)
   {
       int x=0;
       while(v[i][x]=='0')
       {
           x++;
       }
       for(;x<v[i].size();x++)cout<<v[i][x];
       cout<<endl;
   }
}
