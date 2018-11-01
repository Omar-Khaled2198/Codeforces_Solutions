#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long n,k,sum=0,c=0;char ch;
	cin>>n>>k;
	sum=k;
	for(int i=0;i<n;i++)
	{
		cin>>ch>>k;
		if(ch=='+')
		{
			sum+=k;
		}
		else if(ch=='-')
		{
			if(sum<k)
			{
				c++;
			}
			else
			{
				sum-=k;
			}
		}
	}
	cout<<sum<<" "<<c<<endl;
}