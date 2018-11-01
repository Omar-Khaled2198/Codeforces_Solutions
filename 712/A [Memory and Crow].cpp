#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;long x,y;
   cin>>x;
   for(int i=1;i<n;i++)
   {
       cin>>y;
       cout<<x+y<<" ";
       x=y;
   }
   cout<<y<<endl;
}
