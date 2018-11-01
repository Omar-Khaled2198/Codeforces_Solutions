#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum=0,c=0,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        sum+=d;
    }
    n++;
    for(int i=1;i<=5;i++)
    {
        d=sum+i;
        while(true)
        {
            d-=n;
            if(d==1){break;}
            else if(d<=0){c++;break;}
        }
    }
    cout<<c<<endl;

}