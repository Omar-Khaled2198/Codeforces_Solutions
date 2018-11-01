#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,MIN=0,MAX=0,temp;
    cin>>n>>m;temp=n;
    int a[m],b[m];
    vector<int>v;
    for(int i=0;i<m;i++){cin>>x;b[i]=x;v.push_back(x);}
    sort(v.rbegin(),v.rend());
    sort(b,b+m);
    while(true)
    {
        MAX+=v[0];n--;v[0]--;
        if(n==0)break;
        sort(v.rbegin(),v.rend());
    }
    n=temp;
    for(int i=0;i<m;i++)
    {
        if(n>b[i])
        {
            MIN+=(pow(b[i],2)+b[i])/2;
            n-=b[i];
        }
        else
        {
            for(int x=b[i];x>=1;x--)
            {
                if(n==0)break;
                else
                {
                    MIN+=x;n--;
                }
            }
        }
        if(n==0)break;
    }
    cout<<MAX<<" "<<MIN<<endl;
}