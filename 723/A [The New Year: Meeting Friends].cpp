#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,b,e,m=1000;
    cin>>x>>y>>z;
    b=min(min(x,y),z);e=max(max(x,y),z);
    for(int i=b;i<=e;i++)
    {
    	m=min(m,abs(x-i)+abs(y-i)+abs(z-i));
    }
    cout<<m<<endl;
}

