#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n,k,c=0;string s,t="";
	cin>>n>>k;
	cin>>s;
	if(k==2)
	{
		string t1="",t2="";int c1=n,c2=n;
		for(int i=0;i<n;i++)
		{
			if(i%2==0){t1+="A";t2+="B";}
			else {t1+="B";t2+="A";}
		}
		for(int i=0;i<n;i++)
		{
			if(s[i]==t1[i])c1--;
			if(s[i]==t2[i])c2--;
		}
		if(c1<c2){cout<<c1<<endl;cout<<t1<<endl;}
		else {cout<<c2<<endl;cout<<t2<<endl;}
	}
	else{
	n=s.size();
	for(int i=0;i<n;i++)
	{
		if(i==0)t+=s[i];
		else
		{
			if(t[t.size()-1]==s[i])
			{
				for(int x=0;x<k;x++)
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
	cout<<c<<endl;
	cout<<t<<endl;}
}
