#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int n,m,ones=0,twos=0;
   cin>>n>>m;
   if(m>n)
   {
	   cout<<-1<<endl;
   }else{
   if(n%2==0)
   {
	   twos=n/2;
	   ones=0;
   }
   else
   {
	   twos=(n/2);
	   ones=n%2;
   }
   while(((twos)+ones)%m!=0)
   {
	   twos--;
	   ones+=2;
   }
	  cout<<ones+twos<<endl;}
}
