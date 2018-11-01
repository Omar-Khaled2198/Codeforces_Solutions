#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,x,temp;
	cin>>n;
	vector<int> v,f;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	int maxi=*max_element(v.begin(),v.end());
	int mini=*min_element(v.begin(),v.end());
	int maxp,minp;
	for(int i=0;i<n;i++)
	{
		if(v[i]==maxi)
			maxp=i;
		else if(v[i]==mini)
			minp=i;
	}
	temp=n-1-minp;if(temp<0)temp=-temp;f.push_back(temp);
	temp=minp-0;f.push_back(temp);
	temp=n-1-maxp;f.push_back(temp);
	temp=maxp-0;f.push_back(temp);
	cout<<*max_element(f.begin(),f.end())<<endl;
}
