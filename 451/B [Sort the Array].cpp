#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,be=-1,en=-1;
   cin>>n;
   long long a[n],b[n];
   vector<long long>v1,v2;
   for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
   sort(b,b+n);
   for(int i=0;i<n;i++)
   {
       if(a[i]!=b[i]&&be==-1)be=i;
       else if(a[i]!=b[i])en=i;
   }
   for(int i=be;i<=en;i++){v1.push_back(a[i]),v2.push_back(b[i]);}
   sort(v2.rbegin(),v2.rend());
   if(v1==v2||be==-1&&en==-1)
   {
       cout<<"yes"<<endl;
       if(be==-1&&en==-1){en=0;be=0;}
       cout<<be+1<<" "<<en+1<<endl;
   }
   else cout<<"no"<<endl;
}
