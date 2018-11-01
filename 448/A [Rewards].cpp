#include <bits/stdc++.h>

using namespace std;

int main()
{
   int c[3],m[3],n;
   cin>>c[0]>>c[1]>>c[2];
   cin>>m[0]>>m[1]>>m[2];
   cin>>n;
   int sc=c[0]+c[1]+c[2];
   int sm=m[0]+m[1]+m[2];
   if(sc<=5&&sm<=10&&n>1)cout<<"YES"<<endl;
   else
    {
        sc%5!=0?n-=(sc/5)+1:n-=sc/5;
        sm%10!=0?n-=(sm/10)+1:n-=sm/10;
        if(n>=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
}

