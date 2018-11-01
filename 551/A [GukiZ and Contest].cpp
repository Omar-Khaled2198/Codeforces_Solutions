#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=1;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;cin>>arr[i],i++);
   for(int i=0;i<n;i++)
   {
	   for(int x=0;x<n;x++)if(arr[i]<arr[x])c++;
	   cout<<c<<" ";
	   c=1;
   }
}
