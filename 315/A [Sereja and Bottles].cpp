#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i]>>b[i];}
    for(int i=0;i<n;i++)
    {
    	for(int x=0;x<n;x++)
    	{
    		if(a[i]==b[x]&&i!=x)
    		{
    			c++;break;
    		}
    	}
    }
    cout<<n-c<<endl;
}
