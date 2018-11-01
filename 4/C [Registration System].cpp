#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    long n,in;string s;bool check=false;
    vector<string> str;vector<long> c;
    cin>>n;
    stringstream ss;string st;
    for(int i=0;i<n;i++)
    {
    	cin>>s;
    	for(int x=0;x<str.size();x++)
    	{
    	   if(s==str[x])
    	   {
    		   c[x]++;
    		   check=true;
    		   in=x;
    		   break;
    	   }
    	}
    	if(check==false)
    	{
    		str.push_back(s);c.push_back(0);
    		cout<<"OK"<<endl;
    	}
    	else
    	{
    		ss<<c[in];st=ss.str();
    		cout<<s+st<<endl;
    	}
    ss.str(string());
    check=false;
    }
}
