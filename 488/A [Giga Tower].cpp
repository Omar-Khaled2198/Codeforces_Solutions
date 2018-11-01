#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int check(long n,long temp)
{
	stringstream ss;string s;
	ss<<n;s=ss.str();
	ss.str(string());
	int c=0;
	for(int i=0;i<s.size();i++){if(s[i]=='8')c++;}
	if(c!=0)
	{
		cout<<n-temp<<endl;
	}
	else
	{
		return check(n+1,temp);
	}
}
int main()
{
	string s;int c=0;long n,temp;
	cin>>s;
	n=atoi(s.c_str());
	temp=n;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='8')
			c++;
	}
    if(c==0)
    {
    	check(n,temp);
    }
    else
    {
    	n+=1;
    	check(n,temp);
    }
}
