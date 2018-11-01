#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int a[10]={2,7,2,3,3,4,2,5,1,2};
	cout<<a[s[0]-'0']*a[s[1]-'0']<<endl;
}

