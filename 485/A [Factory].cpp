#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x,m,sum=0,c=0,temp=0;
   cin>>x>>m;
   sum=x;
   set<int>s;
   while(true)
   {
       if(sum%m==0){c=1;break;}
       s.insert(sum%m);
       if(s.size()!=temp)temp=s.size();
       else break;
       sum+=sum%m;
   }
   if(c==1)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
