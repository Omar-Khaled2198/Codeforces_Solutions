#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n,k,c=0;string s,t="";
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++)
	{
		if(i==0)t+=s[i];
		else
		{
			if(t[t.size()-1]==s[i])
			{
				for(int x=0;x<26;x++)
				{
					if(a[x]!=t[t.size()-1]&&a[x]!=s[i+1])
					{
						t+=a[x];c++;break;
					}
				}
			}
			else
				t+=s[i];
		}
	}
	cout<<t<<endl;
}
