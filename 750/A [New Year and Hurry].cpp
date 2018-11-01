#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,s=0,c=0;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        s+=5*i;
        if((s+t)>240)break;
        c++;
    }
    cout<<c<<endl;
}
