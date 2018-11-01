#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,n,x,c=301;
    cin>>p>>n;
    vector<int>arr(p);
    fill(arr.begin(),arr.end(),301);
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	if(arr[x%p]==301)
    	{
    	arr[x%p]=x%p;
    	}
    	else
    	{
    		c=i+1;break;
    	}
    }
    if(c==301)cout<<-1<<endl;
    else
    	cout<<c<<endl;
}
