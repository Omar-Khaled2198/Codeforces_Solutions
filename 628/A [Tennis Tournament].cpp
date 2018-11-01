#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,b,p,x=0,r;
   cin>>n>>b>>p;
   r=n;
   while(r!=1)
   {
       x+=b*2*int(log2(r))+int(log2(r));
       r-=int(log2(r));
   }
   cout<<x<<" "<<p*n<<endl;
}
