#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0,c=0,x,y;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)m++;
        else if(x<y)c++;
        else if(x==y)continue;
    }
    if(m==c)cout<<"Friendship is magic!^^"<<endl;
    else if(m>c)cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;
}