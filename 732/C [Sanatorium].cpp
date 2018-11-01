#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long a[3],maxi,mini;
   cin>>a[0]>>a[1]>>a[2];
   sort(a,a+3);
   maxi=a[2];
   if(a[0]<a[2])a[0]++;
   if(a[1]<a[2])a[1]++;
   sort(a,a+3);
   cout<<a[2]-a[0]+a[2]-a[1]<<endl;
}

