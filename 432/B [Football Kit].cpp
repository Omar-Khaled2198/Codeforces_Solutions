#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,h=0,a=0;
	cin>>n;
	int hh[n],aa[n];
	int home[100002];
	fill(home,home+100002,0);
	for(int i=0;i<n;i++)
    {
        cin>>hh[i]>>aa[i];
        home[hh[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        a=n-home[aa[i]]-1;
        h=home[aa[i]]+n-1;
        cout<<h<<" "<<a<<endl;
        h=a=0;
    }
}
