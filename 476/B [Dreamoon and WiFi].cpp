#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s="";int c=0,n=0,m=0,temp;
   set<string>v;
   set<string>::iterator it;
   vector<string>vec;
   string t1,t2;
   cin>>t1>>t2;
   for(int i=0;i<t2.size();i++)
   {
	   if(t2[i]=='?')n++;
   }
   if(n==0)
   {
	   for(int i=0;i<t1.size();i++)
	   {
		   if(t1[i]=='+')c++;
		   else if(t1[i]=='-')c--;
		   if(t2[i]=='+')m++;
		   else if(t2[i]=='-')m--;
	   }
	   if(c==m){cout<<fixed<<setprecision(12)<<float(1)<<endl;return 0;}
	   else {cout<<fixed<<setprecision(12)<<float(0)<<endl;return 0;}
   }
   for(int i=0;i<n;i++)
   {
	   s+='+';
   }
   v.insert(s);
   string s1=s;
   for(int i=0;i<s.size();i++)
   {
	 s[i]='-';
	 s1=s;
	 while(c!=1025)
	 {
		 next_permutation(s1.begin(),s1.end());
		 v.insert(s1);
		 c++;
	 }
	 c=0;
   }
   for(it=v.begin();it!=v.end();it++)
   {
	   s=*it;
	   if(s.size()==n)vec.push_back(s);
   }
   c=n=0;
   for(int i=0;i<t1.size();i++)
   {
	   if(t1[i]=='+')c++;
	   else c--;
   }
   sort(t2.begin(),t2.end());
   for(int i=0;i<t2.size();i++)
   {
	   if(t2[i]=='+')m++;
	   else if(t2[i]=='-')m--;
   }
   temp=m;
   for(int i=0;i<vec.size();i++)
   {
	   for(int x=0;x<vec[i].size();x++)
	   {
		   if(vec[i][x]=='+')m++;
		   else if(vec[i][x]=='-')m--;
	   }
	   if(m==c)n++;
	   m=temp;
   }
   double final=double(n)/double(vec.size());
   cout<<fixed<<setprecision(11)<<final<<endl;
}
