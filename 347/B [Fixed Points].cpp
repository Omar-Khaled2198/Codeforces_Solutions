#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,c=0,count=0;
    cin>>n;bool ch=false;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==i)c++;
        if(x>=n)count++;
        m.insert(pair<int,int>(i,x));
    }
    if(c!=n){
    for(int i=0;i<n;i++)
    {
        if(m[i]!=i)
        {
            if(m[m[i]]==i&&m[i]<n)
            {
                c+=2;ch=true;break;
            }
        }
    }}
    if(ch==false)
    {
        if(c!=n)
            c++;
    }
    cout<<c<<endl;
}