#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    long long m=max(b+d,max(c+d,max(a+c,a+b))),
    mi=min(b+d,min(c+d,min(a+c,a+b)));
    unsigned long long sum=m+n;
    unsigned long long sum2=mi+n;
    long long x=1,f=0;
    if(sum2<=sum)x=sum2-m;
    f=x*n;
    if(f<0)cout<<0<<endl;
    else cout<<f<<endl;
}
