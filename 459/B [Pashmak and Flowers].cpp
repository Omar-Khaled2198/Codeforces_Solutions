#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,c1=0,c2=0;
    cin>>n;
    unsigned long long t1,t2,Max,Min,a[n],sum=0;
    cin>>a[0];
    Max=Min=a[0];c1=c2=1;t1=t2=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        Max=max(Max,a[i]);
        if(Max==t1)
        {
            if(a[i]==Max)c1++;
        }
        else
            {c1=1;t1=Max;}

        Min=min(Min,a[i]);
        if(Min==t2)
        {
            if(a[i]==Min)c2++;
        }
        else {c2=1;t2=Min;}
    }
    if(Max==Min)
    {
      n--;
      while(n>0){sum+=n;n--;}
      cout<<0<<" "<<sum<<endl;
    }
    else{
    cout<<Max-Min<<" "<<c1*c2<<endl;}

}
