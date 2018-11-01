#include <bits/stdc++.h>

using namespace std;

int main()
{
   int c[4],n,m,x,sum,sum1=0,sum2=0;
   cin>>c[0]>>c[1]>>c[2]>>c[3];
   cin>>n>>m;
   for(int i=0;i<n;i++){cin>>x;sum1+=min(c[0]*x,c[1]);}
   sum1=min(sum1,c[2]);
   for(int i=0;i<m;i++){cin>>x;sum2+=min(c[0]*x,c[1]);}
   sum2=min(sum2,c[2]);
   sum=sum1+sum2;
   cout<<min(c[3],sum)<<endl;

}

