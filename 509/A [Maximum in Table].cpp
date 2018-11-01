#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		arr[0][i]=1;
		arr[i][0]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int x=1;x<n;x++)
		{
			arr[i][x]=arr[i][x-1]+arr[i-1][x];
		}
	}
	cout<<arr[n-1][n-1]<<endl;
}
