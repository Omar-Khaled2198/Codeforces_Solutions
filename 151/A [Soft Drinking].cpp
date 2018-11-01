#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  n,k,l,c,d,p,nl,np,m1,m2,m3;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    m1=k*l;m1/=nl;
    m2=c*d;
    m3=p/np;
    int g=min(min(m1,m2),m3);
    cout<<g/n<<endl;
}