#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,c=0,count=0,ways=0;long k,x;
    cin>>n>>k>>c;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=k)count++;
        else
        {
            if(count-(c-1)>0)
            {
                ways+=count-(c-1);
            }
            count=0;
        }
    }
    if(count!=0)
    {
        if(count-(c-1)>0)
        {
            ways+=count-(c-1);
        }
    }
    cout<<ways<<endl;
}