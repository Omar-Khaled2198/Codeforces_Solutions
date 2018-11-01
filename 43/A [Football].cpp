#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;string s;bool c=false;
    vector<string>ss;
    vector<int>x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>s;
    	for(int i=0;i<ss.size();i++)
    	{
    		if(s==ss[i])
    		{
    			x[i]++;
    			c=true;break;
    		}
    		else
    			c=false;
    	}
    	if(c==false)
    	{
    		ss.push_back(s);
    		x.push_back(1);
    	}
    }
    int m=*max_element(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
    {
    	if(x[i]==m)
    	{
    		cout<<ss[i]<<endl;break;
    	}
    }
}
