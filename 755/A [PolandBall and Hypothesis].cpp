#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n,x;
     cin>>n;
     for(int i=1;i<=1000;i++)
     {
         x=(i*n)+1;
         for(int m=2;m*m<=x;m++)
         {
             if(x%m==0){cout<<i<<endl;return 0;}
         }
     }
}
