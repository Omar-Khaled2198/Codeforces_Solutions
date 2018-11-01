#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,h,m,maxi=0;
   cin>>n;
   int arr[24][60]={0};
   for(int i=0;i<n;i++)
   {
       cin>>h>>m;
       arr[h][m]++;
       maxi=max(maxi,arr[h][m]);
   }
   cout<<maxi<<endl;
}
