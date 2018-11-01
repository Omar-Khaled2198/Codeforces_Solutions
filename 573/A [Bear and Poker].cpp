#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   set<long long>st;
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)
   {
       while(a[i]%2==0||a[i]%3==0&&a[i]!=0)
       {
           if(a[i]%2==0)a[i]/=2;
           else if(a[i]%3==0)a[i]/=3;
       }
       st.insert(a[i]);
   }
   if(st.size()==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}
