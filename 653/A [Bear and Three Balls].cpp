#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
	int n,x,c=0;bool check=false;
	scanf("%d",&n);
	vector<long> v;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(int m=0;m<v.size();m++)
			if(x==v[m])c++;
		if(c==0)
			v.push_back(x);
		c=0;
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	if(v.size()==1||v.size()==2)
		printf("NO \n");
	else{
	for(int i=0;i<v.size()-2;i++)
	{
		if(v[i]-v[i+1]==1&&v[i+1]-v[i+2]==1)check=true;
		if(check==true)break;
	}
	if(check==true)
			printf("YES \n");
		else
			printf("NO \n");
	}
}
