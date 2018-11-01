#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,k,x,step=1;
    cin>>n>>k;
    long a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        if(a[i]==1||a[i]==n){cout<<"NO"<<endl;return 0;}
    }
    sort(a,a+k);
    for(int i=0;i<k-2;i++)
    {
        if(a[i+1]-a[i]==1&&a[i+2]-a[i+1]==1)
        {
            cout<<"NO"<<endl;return 0;
        }
        else if(a[i+1]-a[i]==1&&a[i+2]-a[i+1]!=1)step=a[i+1]+1;
        else if(a[i+1]-a[i]!=1)step=a[i]+1;
    }
    cout<<"YES"<<endl;


}