#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main()
{
	int n;string s,f="";
	cin>>n>>s;
	int temp,temp2;
	if(n==2)cout<<s<<endl;
	else if(n==3)cout<<s<<endl;
	else if(n%2==0)
	{
		for(int i=0;i<s.size();i+=2)
		{
			f+=s.substr(i,2)+'-';
		}
		cout<<f.substr(0,f.size()-1)<<endl;
	}
	else if(n%3==0)
	{
		for(int i=0;i<s.size();i+=3)
				{
					f+=s.substr(i,3)+'-';
				}
				cout<<f.substr(0,f.size()-1)<<endl;
	}
	else
	{
		temp=(n/2)*2;
		while((n-temp)%3!=0)
		{
			temp-=2;
		}
		temp2=temp/3;
		for(int i=0;i<temp;i+=2)
				f+=s.substr(i,2)+'-';
		for(int i=temp;i<s.size();i+=3)
				f+=s.substr(i,3)+'-';
		cout<<f.substr(0,f.size()-1)<<endl;

	}
}
