#include <iostream>
using namespace std;

int main()
{
	int k,c=0;
	string s;
	cin>>k>>s;
	for(int i=0;i<k-1;i++)
	{
		s+="0";
	}
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='0')
    		c++;
    }
    if(c==s.size()&&s.size()!=1)
    	cout<<"No solution"<<endl;
    else
    	cout<<s<<endl;
}
