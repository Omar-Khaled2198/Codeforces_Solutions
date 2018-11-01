#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string arr[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
	string s,temp;int n,c=0,check=0;
	cin>>n;
	cin>>s;
	for(int x=0;x<s.size();x++){if(s[x]!='.')check++;}
	for(int i=0;i<8;i++)
	{
		temp=arr[i];
		if(s.size()==temp.size())
		{
			for(int x=0;x<s.size();x++)
			{if(s[x]==temp[x])c++;}
		}
		else
		{
			c=0;continue;
		}
		if(check==c)
			{cout<<temp<<endl;break;}
		c=0;
	}
}
