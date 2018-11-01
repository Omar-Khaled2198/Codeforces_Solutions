#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,c=1;
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
       if(c*m==i)
       {
           n++;c++;
       }
   }
   cout<<n<<endl;
}
