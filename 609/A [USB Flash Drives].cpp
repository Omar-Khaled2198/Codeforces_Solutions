#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;cin>>a[i],i++);
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        if(m==0)break;
        if(m>=a[i]){c++;m-=a[i];}
        else if(m<a[i]){c++;break;}
    }
    cout<<c<<endl;
}
