#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,count=0;string s;
   cin>>n>>s;
   for(int i=0;i<n;i++){if(s[i]=='<')count++;else break;}
   for(int i=n-1;i>=0;i--){if(s[i]=='>')count++;else break;}
   cout<<count<<endl;
}