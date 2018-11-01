#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    int n,h,x,sum=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	if(x<=h)
    	{
    		sum++;
    	}
    	else
    	{
    		sum+=2;
    	}
    }
    cout<<sum<<endl;
}
