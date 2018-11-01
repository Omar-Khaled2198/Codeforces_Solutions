#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,z,c=0;
   cin>>n>>m>>z;
   set<int>s;
   for(int i=1;i*n<=z;i++)
   {
       s.insert(i*n);
       c++;
   }
   for(int i=1;i*m<=z;i++)
   {
       s.insert(i*m);
       c++;
   }
   cout<<abs(c-s.size())<<endl;


}
