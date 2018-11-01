#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
   string s,str="",final="";
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
	   if(s[i]=='.') str+=". ";
	   else str+=s[i];
   }
   for(int i=0;i<str.size()-1;i++)
   {
	   if(s[i]=='-'&&s[i+1]=='.')
		   {final+='1';s[i+1]=' ';}
	   else if(s[i]=='-'&&s[i+1]=='-')
		   {final+='2';s[i+1]=' ';}
	   else if(s[i]=='.')
		   final+='0';
   }
   cout<<final<<endl;

}
