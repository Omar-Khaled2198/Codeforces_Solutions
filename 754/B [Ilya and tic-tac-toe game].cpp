#include <bits/stdc++.h>

using namespace std;

int main()
{
   char a[4][4];bool ch=0;
   vector<char>c;
   for(int i=0;i<4;i++)
   {
       for(int x=0;x<4;x++)
       {
           cin>>a[i][x];
           c.push_back(a[i][x]);
       }
       c.push_back('/');
   }
   for(int i=0;i<4;i++)
   {
       for(int x=0;x<4;x++)
       {
           c.push_back(a[x][i]);
       }
       c.push_back('/');
   }
   for(int i=0;i<4;i++)
   {
       c.push_back(a[i][i]);
   }
   c.push_back('/');
   for(int i=0;i<4;i++)
   {
       c.push_back(a[i][3-i]);
   }
   c.push_back('/');
   c.push_back(a[0][2]);
   c.push_back(a[1][1]);
   c.push_back(a[2][0]);c.push_back('/');
   c.push_back(a[1][3]);
   c.push_back(a[2][2]);
   c.push_back(a[3][1]);c.push_back('/');
   c.push_back(a[0][1]);
   c.push_back(a[1][2]);
   c.push_back(a[2][3]);c.push_back('/');
   c.push_back(a[1][0]);
   c.push_back(a[2][1]);
   c.push_back(a[3][2]);c.push_back('/');
   for(int i=0;i<c.size()-2;i++)
   {
       if(c[i]=='.'&&c[i+1]=='x'&&c[i+2]=='x'){ch=1;break;}
       if(c[i]=='x'&&c[i+1]=='.'&&c[i+2]=='x'){ch=1;break;}
       if(c[i]=='x'&&c[i+1]=='x'&&c[i+2]=='.'){ch=1;break;}
   }
   if(ch==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
