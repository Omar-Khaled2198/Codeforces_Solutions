#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,x,f=0,z=0;string s="";
   cin>>n;
   for(int i=0;i<n;i++)
   {
	   scanf("%d",&x);
	   if(x==5)f+=5;
	   if(x==0)z++;
   }
   while(true)
   {
	   if(f%9!=0)
		   f-=5;
	   else
		   break;
   }
   if(f/5>0&&z>0)
   {
   for(int i=0;i<f/5;i++)s+="5";
   for(int i=0;i<z;i++)s+="0";
   }
   else if(f/5<=0&&z>0)
	   s="0";
   else
	   s="-1";
   cout<<s<<endl;
}
