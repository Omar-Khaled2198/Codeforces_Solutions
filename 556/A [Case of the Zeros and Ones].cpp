#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,z=0,o=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){if(s[i]=='0')z++;if(s[i]=='1')o++;}
    cout<<max(z,o)-min(z,o)<<endl;
}