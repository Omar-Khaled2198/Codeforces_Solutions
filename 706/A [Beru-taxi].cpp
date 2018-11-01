#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,v,x1,y1;
    cin>>x>>y;
    cin>>n;
    double Min=0.0,t=0.0,d;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>v;
        d=sqrt(pow((x1-x),2)+pow((y1-y),2));
        t=d/v;
        if(i==0)Min=t;
        else
        {
            Min=min(Min,t);
        }
    }
    cout<<fixed<<setprecision(20)<<Min<<endl;
}