#include "bits/stdc++.h"
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	string s="";
	for(int i='a';i<='z';i++)
	{
	    s+=char(i);
	}
	if(n==k||k==26)
	{
	    for(int i=0;i<n;i++)
	    {
	        cout<<s[i%26];
	    }
	}
	else
	{
	    for(int i=0;i<n;i++)
	    {
	        cout<<s[i%k];
	    }
	}
}
