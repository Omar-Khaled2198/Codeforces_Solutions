#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,sum=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=0)
        {
            sum+=1-a[i];
            a[i]=1;
        }
        if(a[i]>n)
        {
            sum+=a[i]-n;
            a[i]=n;
        }
    }
    sort(a,a+n);
    for(long long i=0;i<n;i++)sum+=abs((i+1)-a[i]);
    cout<<sum<<endl;
}
