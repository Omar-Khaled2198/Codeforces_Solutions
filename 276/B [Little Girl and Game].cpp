#include <bits/stdc++.h>

using namespace std;

int palindrome(string s)
{
	map<char,int>m;int c=0;
	map<char,int>::iterator it;
	for(int i=0;i<s.size();i++)
	   {
		   m.insert(pair<char,int>(s[i],0));
	   }
    for(int i=0;i<s.size();i++)
	   {
		   m[s[i]]++;
	   }
    for(it=m.begin();it!=m.end();++it)
    {
    	if(it->second==1||it->second%2!=0)
    	{
    		c++;
    	}
    }
   return c;
}

int main()
{
   string s;
   cin>>s;
   int c=1,ch;
   ch=palindrome(s);
   if(ch==1||ch==0)cout<<"First"<<endl;
   else
   {
   while(true)
   {
	   c++;
	   ch--;
	   if(ch==1)
	   {
		   if(c%2==0)
		   {
			   cout<<"Second"<<endl;break;
		   }
		   else
		   {
			   cout<<"First"<<endl;break;
		   }
	   }
   }
   }


}
