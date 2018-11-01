#include <bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
    	if(n%i==0)
    		return false;
    }
    return true;
}

int main()
{
	int n,x;bool c=false;
	cin>>n>>x;
	if(prime(x)==false)cout<<"NO"<<endl;
	else{
	for(int i=n+1;i<x;i++)
	{
		if(prime(i)==true)
		{
			c=true;
			cout<<"NO"<<endl;break;
		}
	}
	if(c==false)cout<<"YES"<<endl;}
}
