#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,arr[7];
   cin>>n;
   for(int i=0;i<7;i++)
   {
	   cin>>arr[i];
   }
   while(true)
   {
	   n-=arr[c];
	   if(n<=0)break;
	   c++;
	   if(c==7)c=0;
   }
   cout<<c+1<<endl;
}
