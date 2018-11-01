#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main()
{
	int n,x,o=0,t=0,th=0;
	vector<int>vec;
	scanf ("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf ("%d",&x);
		if(x==1)o++;
		if(x==2)t++;
		if(x==3)th++;
	}
	vec.push_back(o);vec.push_back(t);vec.push_back(th);
	sort(vec.begin(),vec.end());
	printf("%d",vec[0]+vec[1]);
}
