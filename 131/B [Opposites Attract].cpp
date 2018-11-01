#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long p[11],ne[11],n,x,zero=0;unsigned long long sum=0;
    cin>>n;
    fill(p,p+11,0);
    fill(ne,ne+11,0);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)ne[abs(x)]++;
        else if(x>0)p[x]++;
        else zero++;
    }
    zero--;
    for(int i=1;i<11;i++)
    {
        sum+=p[i]*ne[i];
    }
    sum+=(zero*(zero+1))/2;
    cout<<sum<<endl;
}