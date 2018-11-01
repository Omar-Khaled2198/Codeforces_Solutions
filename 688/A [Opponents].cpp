#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,d,c=0,count=0,maxi=0;
	cin>>n>>d;string s;
	for(int i=0;i<d;i++)
	{
		cin>>s;
		for(int x=0;x<n;x++)
		{
			if(s[x]=='0')
				c++;
		}
		if(c>0)
		{
			count++;c=0;
			maxi=max(maxi,count);
		}
		else
		{
			count=0;c=0;
		}
	}
	cout<<maxi<<endl;
}
