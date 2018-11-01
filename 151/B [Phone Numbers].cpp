#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,t,n1,n2,n3,m1=0,m2=0,m3=0;string s,f1,f2,f3;char c;
   cin>>n;vector<string>name;
   int a[n][3]={0};
   for(int i=0;i<n;i++)
   {
       cin>>t>>s;
       name.push_back(s);
       for(int x=0;x<t;x++)
       {
           cin>>n1>>c>>n2>>c>>n3;
           if(n1/10==n1%10&&n1%10==n2/10&&n2/10==n2%10&&n2%10==n3/10&&n3/10==n3%10){a[i][0]++;m1=max(m1,a[i][0]);}
           else if(n1/10>n1%10&&n1%10>n2/10&&n2/10>n2%10&&n2%10>n3/10&&n3/10>n3%10)
            {
               a[i][1]++;m2=max(m2,a[i][1]);
            }
           else{a[i][2]++;m3=max(m3,a[i][2]);}
       }
   }
   f1="If you want to call a taxi, you should call: ";
   for(int i=0;i<n;i++)if(a[i][0]==m1)f1+=name[i]+", ";
   f1=f1.substr(0,f1.size()-2)+'.';
   cout<<f1<<endl;
   f2="If you want to order a pizza, you should call: ";
   for(int i=0;i<n;i++)if(a[i][1]==m2)f2+=name[i]+", ";
   f2=f2.substr(0,f2.size()-2)+'.';
   cout<<f2<<endl;
   f3="If you want to go to a cafe with a wonderful girl, you should call: ";
   for(int i=0;i<n;i++)if(a[i][2]==m3)f3+=name[i]+", ";
   f3=f3.substr(0,f3.size()-2)+'.';
   cout<<f3<<endl;
}

