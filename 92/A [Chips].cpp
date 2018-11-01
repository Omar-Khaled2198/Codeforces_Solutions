#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,i=1;
   cin>>n>>m;
   while(true)
   {
       if(i>n)i=1;
       else
       {
           if(m-i>=0){m-=i;i++;}
           else break;
       }
   }
   cout<<m<<endl;
}
