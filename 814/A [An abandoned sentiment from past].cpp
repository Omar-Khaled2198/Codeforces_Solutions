#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,in,t=0;
    cin>>n>>m;
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<m;i++)
    {
        cin>>in;
        b.push_back(in);
    }
    sort(b.rbegin(),b.rend());
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=b[t];
            t++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
