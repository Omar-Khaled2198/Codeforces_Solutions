#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;int c=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++)
    {
       if(c==6)break;
       else if(s[i]==s[i+1])c++;
       else c=0;
    }
    if(c==6)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
