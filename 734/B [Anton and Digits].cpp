#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long t1,t2,t3,t4;
   long long c1=0,c2=0;
   cin>>t1>>t2>>t3>>t4;
   c1=min(t4,min(t1,t3));
   t1-=c1;
   c2=min(t1,t2);
   cout<<c1*256+c2*32<<endl;
}
