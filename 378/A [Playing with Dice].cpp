#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,x=0,y=0,z=0;
   cin>>a>>b;
   for(int i=1;i<=6;i++)
   {
       if(abs(a-i)<abs(b-i))x++;
       else if(abs(a-i)>abs(b-i))z++;
       else y++;
   }
   cout<<x<<" "<<y<<" "<<z<<endl;
}
