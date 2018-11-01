#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s="0"+s;
    int n=s.size();
    int a[n];
    fill(a,a+n,0);
    for(int i=1;i<n;i++)
    {
    	   if(s[i]==s[i+1]){a[i]+=a[i-1]+1;}
    	   else a[i]+=a[i-1];

    }
    int m,l,r;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	cin>>l>>r;
    	cout<<abs(a[r-1]-a[l-1])<<endl;
    }
}
