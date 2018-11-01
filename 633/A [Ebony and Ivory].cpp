#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int a,b,c;bool check=false;
   cin>>a>>b>>c;
   for(int i=0;i<=c;i++)
   {
	   for(int x=0;x<=c;x++)
	   {
		   if((i*a)+(x*b)==c)
		   {
			   check=true;
			   cout<<"YES"<<endl;break;
		   }
	   }
	   if(check==true)break;
   }
   if(check==false)
	   cout<<"NO"<<endl;
}
