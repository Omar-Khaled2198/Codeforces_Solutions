#include <bits/stdc++.h>

using namespace std;

int main()
{
   unsigned long long a,b,x,y,k,c;
   cin>>a>>b>>x>>y>>k;
   if(x<a&&y>=a)x=a;
   if(x>b||y<a)cout<<0<<endl;
   else if(x<=b)
   {
       if(x<=b&&y>=b)
        {
            c=(b-x)+1;
            if(k>=x&&k<=b)c--;
       }
       else if(x<=b&&y<=b)
        {
            c=(y-x)+1;
            if(k>=x&&k<=y)c--;
       }
       cout<<c<<endl;
   }
}
