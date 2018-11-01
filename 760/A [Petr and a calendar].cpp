#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d,m,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>m>>d;m--;
    if(a[m]==31&&d>5)cout<<6<<endl;
    else if(a[m]==31&&d<=5)cout<<5<<endl;
    else if(a[m]==30&&d==7)cout<<6<<endl;
    else if(a[m]==30&&d<7)cout<<5<<endl;
    else if(a[m]==28&&d==1)cout<<4<<endl;
    else if(a[m]==28&&d>1)cout<<5<<endl;
}