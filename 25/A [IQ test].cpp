#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	vector<int>odd,even;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			even.push_back(i);
		else
			odd.push_back(i);
	}
	if(odd.size()<even.size())
		cout<<odd[odd.size()-1]+1<<endl;
	else
		cout<<even[even.size()-1]+1<<endl;;
}
