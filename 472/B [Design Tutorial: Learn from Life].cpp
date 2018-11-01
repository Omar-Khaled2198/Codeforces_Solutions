#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i-=k)
    {
        c+=(a[i]-1)*2;
    }
    cout<<c<<endl;
}
