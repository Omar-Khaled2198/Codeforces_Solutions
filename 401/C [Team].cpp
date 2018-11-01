#include <bits/stdc++.h>

using namespace std;

int main()
{
   long n,m,sum=0,c=1,o=0,z=0,one,zero;string s="",t="";
   cin>>n>>m;sum=n+m;one=m;zero=n;
   for(long i=1;i<=sum;i++)
   {
       if(c==0&&n>0){s+='0';n--;c++;}
       else if(c>0&&m>0){s+='1';m--;c++;}
       if(c>2)c=0;
       if(m==0)break;
   }
   for(long i=0;i<s.size();i++)
   {
       if(s[i]=='1'||s[i]=='0')t+=s[i];
       if(s[i]=='1'&&s[i+1]=='1'&&n>0){t+='0';n--;}
   }
   if(n==1)t='0'+t;
   else if(n==2){t='0'+t;t+='0';}
   for(long i=0;i<t.size();i++)
   {
       if(t[i]=='1')o++;
       if(t[i]=='0')z++;
   }
   if(z!=zero||o!=one)cout<<-1<<endl;
   else cout<<t<<endl;
}
