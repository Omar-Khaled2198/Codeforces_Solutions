#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int r1,r2,d1,d2,c1,c2;bool check=false;
   cin>>r1>>r2>>c1>>c2>>d1>>d2;
   for(int i=1;i<=9;i++)
   {
	   for(int x=1;x<=9;x++)
	   {
		   for(int y=1;y<=9;y++)
		   {
			   for(int z=1;z<=9;z++)
			   {
				   if(i+x==r1&&y+z==r2&&i+y==c1&&x+z==c2&&i+z==d1&&y+x==d2)
				   {
					   if(i!=x&&i!=y&&i!=z&&x!=y&&x!=z&&y!=z){
					   cout<<i<<" "<<x<<endl;
					   cout<<y<<" "<<z<<endl;
					   check=true;
					   break;}
				   }
			   }
			   if(check==true)break;
		   }
		   if(check==true)break;
	   }
	   if(check==true)break;
   }
   if(check==false)cout<<-1<<endl;
}
