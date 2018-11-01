#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s,r,p;int c=0;
	cin>>s>>r>>p;int count=0;
	map<char,int>m;
	map<char,int>::iterator it;
	for(int i=0;i<p.size();i++)m.insert(pair<char,int>(p[i],0));
	for(int i=0;i<p.size();i++)m[p[i]]++;
	for(int i=0;i<s.size();i++)
	{
		if(m[s[i]]<=0)
		{
			cout<<"NO"<<endl;c++;break;
		}
		else
		{
			m[s[i]]--;
		}
	}
	if(c==0)
	{
		for(int i=0;i<r.size();i++)
		{
			if(m[r[i]]<=0)
			{
				cout<<"NO"<<endl;c++;break;
			}
			else
			{
				m[r[i]]--;
			}
		}
		if(c==0)
		{
			for(it=m.begin();it!=m.end();++it)
			{
				if(it->second==0)count++;
			}
			if(count==m.size())
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
}
