#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,x,y,c=0;
   cin>>n>>m;
   map<int,int>mm;
   map<int,int>::iterator it;
   for(int i=0;i<m;i++)
    {cin>>x>>y;mm.insert(pair<int,int>(x,1));mm.insert(pair<int,int>(y,1));}
   for(int i=1;i<=n;i++)if(mm[i]!=1){c=i;break;}
   cout<<n-1<<endl;
   for(int i=1;i<=n;i++)if(i!=c)cout<<i<<" "<<c<<endl;
}
