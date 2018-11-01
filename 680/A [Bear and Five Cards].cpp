#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long x,c=0,sum=0;
	vector<int> v,f,count;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		sum+=x;
		v.push_back(x);
		for(int m=0;m<f.size();m++)
		{
			if(x==f[m])
			{
				c++;
			}
		}
		if(c==0)
			f.push_back(x);
		c=0;
	}
	c=0;
	sort(v.begin(),v.end());
	sort(f.begin(),f.end());
	for(int i=0;i<f.size();i++)
	{
		for(int y=0;y<v.size();y++)
		{
			if(f[i]==v[y])
			{
				c++;
			}
		}
		if(c>3)
			c=3;
		if(c==1)
			c=0;
		count.push_back(sum-(c*f[i]));
		c=0;
	}
	sort(count.begin(),count.end());
	cout<<count[0]<<endl;
}
