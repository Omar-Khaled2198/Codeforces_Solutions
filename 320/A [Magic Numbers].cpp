#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
   string s;int o=0,f=0,h=0;
   cin>>s;
   for(int i=0;i<s.size();i++)if(s[i]=='1')o++;
   if(s.size()>1){
   for(int i=0;i<s.size()-1;i++)if(s[i]=='1'&&s[i+1]=='4')f++;
   for(int i=0;i<s.size()-2;i++)if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')h++;}
   if(o+f+h>=s.size())
	   cout<<"YES"<<endl;
   else
	   cout<<"NO"<<endl;
}
