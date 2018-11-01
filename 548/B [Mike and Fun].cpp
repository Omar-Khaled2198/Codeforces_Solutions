#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,eyes=0,c1=0,q,r,c,MAX=0;
  cin>>n>>m>>q;
  vector<int>v;
  int a[n][m];
  for(int i=0;i<n;i++)
  {
      for(int x=0;x<m;x++)
      {
          cin>>a[i][x];
          if(a[i][x]==1)c1++;
          else {eyes=max(eyes,c1);c1=0;}
      }
      if(c1!=0)eyes=max(eyes,c1);
      v.push_back(eyes);eyes=0;c1=0;
  }
  cout<<endl;
  for(int i=0;i<q;i++)
  {
      cin>>r>>c;
      if(a[r-1][c-1]==1)
      {
         a[r-1][c-1]=0;
         for(int i=0;i<m;i++)
         {
             if(a[r-1][i]==1)c1++;
             else {eyes=max(eyes,c1);c1=0;}
         }
         if(c1!=0)eyes=max(eyes,c1);
         v[r-1]=eyes;eyes=0;c1=0;
         cout<<*max_element(v.begin(),v.end())<<endl;
      }
      else
      {
         a[r-1][c-1]=1;
         for(int i=0;i<m;i++)
         {
             if(a[r-1][i]==1)c1++;
             else {eyes=max(eyes,c1);c1=0;}
         }
         if(c1!=0)eyes=max(eyes,c1);
         v[r-1]=eyes;eyes=0;c1=0;
         cout<<*max_element(v.begin(),v.end())<<endl;
      }
  }

}
