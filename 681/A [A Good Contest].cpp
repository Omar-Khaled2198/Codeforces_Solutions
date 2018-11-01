#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string p;int n,b,a,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p>>b>>a;
		if(b>=2400&&a>b)
			c++;
	}
	if(c==0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
