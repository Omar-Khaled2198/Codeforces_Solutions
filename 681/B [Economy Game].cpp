#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n;
   cin>>n;bool check=false;
   for(int i=0;i<=n/1234567;i++)
   {
	   for(int x=0;x<=n/123456;x++)
	   {
		   if((n-(i*1234567+x*123456))%1234==0&&n-(i*1234567+x*123456)>=0)
           {
               cout<<"YES"<<endl;check=true;break;
           }
	   }
	   if(check==true)break;
   }
   if(check==false)cout<<"NO"<<endl;
}
