#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,s;
   scanf("%d",&n);
   int p,x;
   vector<int>v;
   vector<int>::iterator f;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&x);
       v.push_back(x);
   }
   sort(v.begin(),v.end());
   scanf("%d",&s);
   for(int i=0;i<s;i++)
   {
       scanf("%d",&p);
       if(p<v[0])cout<<0<<endl;
       else if(p>=v[n-1])cout<<n<<endl;
       else
       {
           f=upper_bound(v.begin(),v.end(),p);
           cout<<f-v.begin()<<endl;
       }
   }
}
