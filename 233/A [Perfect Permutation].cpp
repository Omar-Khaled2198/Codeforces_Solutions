#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1||n%2!=0)cout<<-1<<endl;
    else{
    map<int,int>m;
    for(int i=1;i<=n;i+=2)
    {
        m.insert(pair<int,int>(i,i+1));
        m.insert(pair<int,int>(i+1,i));
    }
    for(int i=1;i<=n;i++)
    {
        cout<<m[i]<<" ";
    }}
}