#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,t="",str="";int n,m=0,c=0,size=0;bool check=false;
   cin>>n>>s;
   for(int i=0;i<n;i++)
   {
	   if(s[i]=='_')s[i]=' ';
	   if(s[i]=='('){check=true;s[i]=' ';}
	   if(s[i]==')'){check=false;s[i]=' ';}
	   if(check==true){if(s[i]=='('||s[i]==')')continue; else t+=s[i];s[i]=' ';}
   }
   s+=' ';t+=' ';
   for(int i=0;i<s.size();i++){if(s[i]!=' ')str+=s[i];else if(str.size()!=0){size=str.size();m=max(m,size);str="";}}
   for(int i=0;i<t.size();i++){if(t[i]!=' '&&t[i+1]==' ')c++;}if(t[t.size()-1]!=' ')c++;
   cout<<m<<" "<<c<<endl;
}

