#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
   string s,temp="",p;int e,q,point;
   cin>>s;temp=s;bool ch=false;
   for(int i=0;i<s.size();i++){if(s[i]=='e')e=i;if(s[i]=='.')point=i;}
   temp=s.substr(0,point)+s.substr(point+1);
   p=temp.substr(0,e-1);
   q=atoi(s.substr(e+1).c_str());
   temp=p;
   if(point+q>temp.size()-point)
   {
	   for(int i=0;i<(point+q)-temp.size();i++)
		   p+='0';
   }
   p.insert(point+q,".");
   for(int i=point+q+1;i<p.size();i++)
   {
	   if(s[i]=='0')
		   ch=true;
	   else
	   {
		   ch=false;
	       break;
	   }
   }
   if(p[p.size()-1]=='.'||ch==true)
   {
	   for(int i=0;i<p.size();i++)
	   {
		   if(p[i]=='.')
			   break;
		   else
			   cout<<p[i];
	   }
   }else
	   cout<<p<<endl;


}
