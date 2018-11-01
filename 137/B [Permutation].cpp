#include <bits/stdc++.h>

using namespace std;

int main()
{
  int cuml[5001];
    fill(cuml,cuml+5001,0);
    int n,x,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cuml[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(cuml[i]==0)count++;
    }
    cout<<count<<endl;
}