#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int gcd(int a,int b)
{
   int r;
   while(b!=0)
   {
	   r=a%b;
	   a=b;
	   b=r;
   }
   return a;
}
int main()
{
   int n,x,g;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
	   cin>>x;
	   v.push_back(x);
   }
   sort(v.begin(),v.end());
   g=v[0];
   for(int i=1;i<v.size();i++)g=gcd(v[i],g);
   cout<<g*n<<endl;
}
