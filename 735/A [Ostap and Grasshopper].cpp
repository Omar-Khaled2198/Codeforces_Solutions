#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,g,t,c=0;
	cin>>n>>k;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]=='G')g=i;
		else if(a[i]=='T')t=i;
	}
	if(g<t){for(int i=g;i<=t;i+=k){if(a[i]=='#')break;else c=i;}if(c==t)cout<<"Yes";else cout<<"NO";}
	else {for(int i=g;i>=t;i-=k){if(a[i]=='#')break;else c=i;}if(c==t)cout<<"Yes";else cout<<"NO";}
}
