#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   char arr[n][m];
   vector<int> r,c;
   for(int i=0;i<n;i++)
   {
	   for(int x=0;x<m;x++)
	   {
		   cin>>arr[i][x];
		   if(arr[i][x]=='*'){r.push_back(i);c.push_back(x);}
	   }
   }
   sort(r.begin(),r.end());sort(c.begin(),c.end());
   for(int i=r[0];i<r[r.size()-1]+1;i++)
   {
   	   for(int x=c[0];x<c[c.size()-1]+1;x++)
   	   {cout<<arr[i][x];}
   	   cout<<endl;
   }
}
