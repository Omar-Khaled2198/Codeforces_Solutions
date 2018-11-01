#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,count=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='A'||s[i]=='F')c++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='I'&&c==n-1)count++;
        if(s[i]=='A'&&c==n)count++;
    }
    cout<<count<<endl;

}
