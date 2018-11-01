#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[256];
    fill(a,a+256,0);
    for(int i='a';i<='z';i++)
    {
    	if(i>'m')a[i]=i-'a';
    	else a[i]='z'-i;
    }
    char st[300001];string t="",s;bool c=0;long long n,k,sum=0;
    cin>>n>>k;
    scanf("%300001s",&st);
    s=st;
    for(int i=0;i<n;i++)
    {
    	if(k==0)c=1;
    	if(c==1)t+=s[i];
    	else if(a[s[i]]>k&&c==0)
    	{
    		if(s[i]+k>='a'&&s[i]+k<='z')
    		{
    			t+=char(s[i]+k);k=0;
    		}
    		else if(abs(s[i]-k)>='a'&&abs(s[i]-k)<='z')
    		{
    			t+=char(abs(s[i]-k));k=0;
    		}
    	}
    	else if(a[s[i]]<=k&&c==0)
    	{
    		if(s[i]+a[s[i]]>='a'&&s[i]+a[s[i]]<='z')
    		{
    		    t+=char(s[i]+a[s[i]]);k-=a[s[i]];
    		}
    		else if(abs(s[i]-a[s[i]])>='a'&&abs(s[i]-a[s[i]])<='z')
    		{
    		    t+=char(abs(s[i]-a[s[i]]));k-=a[s[i]];
    		}
    	}
    }
    if(k==0)cout<<t<<endl;
    else cout<<-1<<endl;

}
