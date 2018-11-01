#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,t="RBYG",x;
   cin>>s;int c=0,count=0,l=0;
   vector<string>v;
   int a[4];
   fill(a,a+4,0);
   for(int i=0;i<s.size();i++)if(s[i]=='!')c++;
   for(int i=0;i<25;i++)
   {
       next_permutation(t.begin(),t.end());
       x=t;
       for(int i=0;i<25;i++)x+=t;
       v.push_back(x);
   }
   for(int i=0;i<v.size();i++)
   {
       count=0;
       for(int l=0;l<s.size();l++)
       {
           if(s[l]==v[i][l])count++;
       }
       if(s.size()-c==count){l=i;break;}
   }
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=v[l][i])
       {
               if(v[l][i]=='R')a[0]++;
                if(v[l][i]=='B')a[1]++;
                 if(v[l][i]=='Y')a[2]++;
                  if(v[l][i]=='G')a[3]++;
       }
   }
   for(int i=0;i<4;i++)cout<<a[i]<<" ";

}
