#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,sum=0,c=0,f=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       if(sum>=n)break;
       else
       {
           c+=i;sum+=c;f++;
       }
   }
   if(sum>n)f--;
   cout<<f<<endl;
}
