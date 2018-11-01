#include <iostream>
using namespace std;

int main()
{
	int n,a,b,sum=0,maxi=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(i==0)
		{
		    sum=b;
		    if(maxi<sum)maxi=sum;
		}
		else
		{
			sum-=a;sum+=b;
			if(maxi<sum)maxi=sum;
		}
	}
	cout<<maxi<<endl;
}