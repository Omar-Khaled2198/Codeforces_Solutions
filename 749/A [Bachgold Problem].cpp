#include <bits/stdc++.h>

using namespace std;

int main()
{
    long k,n=0,c=0;
    cin>>k;
    if(k%2==0)
    {
    	cout<<k/2<<endl;
    	for(int i=0;i<k/2;i++)cout<<2<<" ";
    }
    else
    {
        n=k;
    	while(n%2!=0)
    	{
    		n-=3;
    	}
    	cout<<n/2+(k-n)/2<<endl;
    	for(int i=0;i<n/2;i++)cout<<2<<" ";
    	for(int i=0;i<(k-n)/3;i++)cout<<3<<" ";

    }
}


