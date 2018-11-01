#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n=0,sum=0,a,one=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum+=(a-1)*i+1;
    }
    cout<<sum<<endl;
}