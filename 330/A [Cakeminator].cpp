#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
   int r,c,cell=0;bool check=false;
   cin>>r>>c;
   char arr[r][c];
   for(int i=0;i<r;i++)
   {
	   for(int x=0;x<c;x++)
	   {
		   cin>>arr[i][x];
	   }
   }
   for(int i=0;i<r;i++)
   {
	   for(int x=0;x<c;x++)
	   {
		   if(arr[i][x]=='S')
		   {
			   check=false;
			   break;
		   }
		   else
			   check=true;
	   }
	   if(check==true)
	   {
		   for(int x=0;x<c;x++)
		   {
			   arr[i][x]='E';cell++;
		   }
	   }
	   check=false;
   }
   for(int i=0;i<c;i++)
      {
   	   for(int x=0;x<r;x++)
   	   {
   		   if(arr[x][i]=='S')
   		   {
   			   check=false;
   			   break;
   		   }
   		   else check=true;
   	   }
   	   if(check==true)
   	   {
   		   for(int x=0;x<r;x++)
   		   {
   			   if(arr[x][i]!='E')
   				   cell++;
   		   }
   	   }
   	   check=false;
      }
   cout<<cell<<endl;
}
