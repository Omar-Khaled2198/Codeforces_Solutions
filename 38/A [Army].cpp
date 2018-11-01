#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b,x,sum=0;
	cin>>n;
	int t[101];
	fill(t,t+101,0);
	for(int i=1;i<=n-1;i++)
    {
        cin>>x;t[i]=x;
    }
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        sum+=t[i];
    }
    cout<<sum<<endl;
}
