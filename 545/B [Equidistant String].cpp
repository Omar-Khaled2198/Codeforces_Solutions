#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s1,s2,t="";
  cin>>s1>>s2;
  int n=s1.size(),c=0,c1=0,c2=0;
  for(int i=0;i<n;i++)
  {
      if(s1[i]!=s2[i])c++;
  }
  if(c%2!=0)cout<<"impossible"<<endl;
  else
  {
      c1=c2=c/2;
      for(int i=0;i<n;i++)
      {
          if(s1[i]==s2[i])t+=s1[i];
          else if(s1[i]!=s2[i])
          {
              if(c1>0){c1--;t+=s1[i];}
              else if(c2>0){c2--;t+=s2[i];}
          }
      }
      cout<<t<<endl;
  }


}
