#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){cin>>a[i];if(a[i]>2){if(a[i]%2!=0)a[i]=a[i]%2;else a[i]=2;}}
   for(int i=0;i<n;i++)
   {
	   if(a[i]==0&&c!=0)break;
	   if(a[i]==1&&c!=0)c--;
	   else if(a[i]==1&&c==0)c++;
	   if(a[i]==2&&c==0)continue;
	   if(a[i]==2&&c!=0){if(c==2)c=0;}
   }
   if(c==0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

