#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n;
   cin>>n;
   int size=n/2;
   long long a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<size;i+=2)
   {
       swap(a[i],a[n-i-1]);
   }
   for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
