#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
   int n;
   double x,sum=0.0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
	   cin>>x;
	   sum+=x;
   }
   double final=sum/n;
   cout<<fixed<<setprecision(12)<<final<<endl;
}
