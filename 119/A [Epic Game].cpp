#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    while(true)
    {
    	if(n<=0)
    	{cout<<1<<endl;break;}
    	n-=__gcd(a,n);
    	if(n<=0)
    	{cout<<0<<endl;break;}
    	n-=__gcd(b,n);
    }
}
