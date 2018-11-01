#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,maxi,mini,i1,i2;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;v.push_back(x);
    }
    maxi=*max_element(v.begin(),v.end());
    mini=*min_element(v.begin(),v.end());
    for(int i=0;i<n;i++)if(v[i]==maxi){i1=i;break;}
    for(int i=0;i<n;i++)if(v[i]==mini){i2=i;}
    if(i2<i1)
    {
        cout<<i1-1+n-1-i2<<endl;
    }
    else
        cout<<i1+n-1-i2<<endl;
}