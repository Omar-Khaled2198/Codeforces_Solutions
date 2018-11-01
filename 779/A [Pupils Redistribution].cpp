#include "bits/stdc++.h"
using namespace std;

int main() 
{
	int n,c=0;
	cin>>n;
	int a[n],b[n],freqa[6],freqb[6];
	fill(freqa,freqa+6,0);
	fill(freqb,freqb+6,0);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    freqa[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	    freqb[b[i]]++;
	}
	for(int i=0;i<6;i++)
	{
	   if((freqa[i]+freqb[i])%2==0)
	   {
	       c+=abs(min(freqa[i],freqb[i])-(freqa[i]+freqb[i])/2);
	   }
	   else
	   {
	       cout<<-1;
	       return 0;
	   }
	}
	if(c%2==0)cout<<c/2;
	else cout<<-1;
}
