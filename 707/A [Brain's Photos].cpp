#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;bool check=false;char c;
   cin>>n>>m;
   for(int i=0;i<n*m;i++)
   {
       cin>>c;
       if(c=='M'||c=='Y'||c=='C')
       {
           check=true;
       }
   }
   if(check==true)cout<<"#Color"<<endl;
   else cout<<"#Black&White"<<endl;
}
