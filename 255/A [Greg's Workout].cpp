#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int n,c=0,bi=0,b=0;
   cin>>n;
   int arr[n];vector<int>v;
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<n;i+=3)c+=arr[i];
   for(int i=1;i<n;i+=3)bi+=arr[i];
   for(int i=2;i<n;i+=3)b+=arr[i];
   v.push_back(c);v.push_back(bi);v.push_back(b);
   int maxi=*max_element(v.begin(),v.end());
   if(maxi==v[0])cout<<"chest"<<endl;
   else if(maxi==v[1])cout<<"biceps"<<endl;
   else if(maxi==v[2])cout<<"back"<<endl;
}
