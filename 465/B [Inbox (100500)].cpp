#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,count=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)v.push_back(i);
    }
    if(v.size()==0){cout<<0;return 0;}
    for(int i=0;i<v.size()-1;i++)
    {
        if(abs(v[i]-v[i+1])==1)
        {
            count++;
        }
        else count+=2;
    }
    cout<<count<<endl;
}