#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,c=0;string s="",t;
	cin>>n;
	for(int i=0;i<n;i++){cin>>t;s+=t;}
	for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&s[i+1]!='0')c++;
        else if(s[i]=='0'&&s[i+1]!='1')c++;
    }
    cout<<c<<endl;
}
