#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,suml=0,sumr=0,maxi=0,in=0;
	cin>>n;
	int l[n],r[n];
	for(int i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		suml+=l[i];sumr+=r[i];
	}
	maxi=abs(suml-sumr);
	for(int i=0;i<n;i++)
	{
	   if(maxi<=abs((suml+r[i]-l[i])-(sumr-r[i]+l[i]))){in=i;maxi=abs((suml+r[i]-l[i])-(sumr-r[i]+l[i]));}
	}
	if(maxi==abs(suml-sumr))cout<<0<<endl;
	else cout<<in+1<<endl;
}
