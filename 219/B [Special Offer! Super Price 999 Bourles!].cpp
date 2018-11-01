#include <bits/stdc++.h>

using namespace std;

string convert(unsigned long long n)
{
   unsigned long long x;
   stringstream st;string s="";
   while(n!=0)
   {
	  x=n%10;
	  st<<x;
	  s+=st.str();
	  st.str(string());
	  n/=10;
   }
   reverse(s.begin(),s.end());
   return s;
}

int main()
{
   unsigned long long p,d;short c=0;
   cin>>p>>d;
   d=p-d;
   string x,y,t="",temp;char ch;
   x=convert(p);y=convert(d);temp=x;
   vector<string>v;t="";
   for(int i=0;i<x.size();i++)t+="9";
   v.push_back(t);
   for(int i=0;i<x.size()-1;i++)
   {
	   ch=t[i];
	   while(ch-'0'>0)
	   {
		   t[i]=ch-1;
		   v.push_back(t);
		   ch--;
	   }
	   t[i]=x[i];
   }
   string tt="0"+tt;
   for(int i=0;i<v.size();i++)
   {
	   if(y.size()<v[i].size())
	   {
		   if((v[i].compare(temp)==-1||v[i]==temp)&&(v[i].compare(tt)==1||v[i]==tt))
		   	   {
			       if(v[i][0]=='0')for(int b=1;b<v[i].size();b++)cout<<v[i][b];
			       else cout<<v[i]<<endl;
			       c=1;break;
		   	   }
	   }
	   if((v[i].compare(temp)==-1||v[i]==temp)&&(v[i].compare(y)==1||v[i]==y))
	   {
		   cout<<v[i]<<endl;c=1;break;
	   }
   }
   t="";
   for(int i=0;i<x.size()-1;i++)t+="9";
   if(c==0)
   {
	   if(int(log10(p)+1)>int(log10(d)+1))
	   	{
		   c=1;
	   		for(int i=0;i<int(log10(p)+1)-1;i++)cout<<'9';
	   	}
   }
   if(c==0)
   {
	   for(unsigned long long i=p-1;i>=d;i--)
	   {
		   if(i%10==9)
		   {
			   cout<<i<<endl;c=1;break;
		   }
	   }
   }
   if(c==0)
	   cout<<temp<<endl;
}
