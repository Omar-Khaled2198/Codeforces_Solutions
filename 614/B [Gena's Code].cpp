#include <bits/stdc++.h>

using namespace std;


int main()
{
   long n,c=0,num=0;string s,t="-1";
   cin>>n;bool check=0;
   vector<string>v;
   for(int i=0;i<n;i++)
   {
       cin>>s;
       if(s[0]=='0'&&s.size()==1)check=1;
       num=count(s.begin(),s.end(),'0');
       if(num==s.size()-1&&s[0]=='1')c+=num;
       else t=s;
   }
   if(check==true)cout<<0<<endl;
   else
   {
       if(t=="-1")t="1";
       for(int i=0;i<t.size();i++)
       {
           cout<<t[i];
       }
       for(int i=0;i<c;i++)
       {
           cout<<0;
       }
   }


}
