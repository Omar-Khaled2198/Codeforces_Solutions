#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	set<char> myset;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='{'&&s[i]!='}'&&s[i]!=' '&&s[i]!=',')
			myset.insert(s[i]);
	}
	cout<<myset.size()<<endl;
}
