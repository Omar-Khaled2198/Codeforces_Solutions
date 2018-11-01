#include <bits/stdc++.h>

using namespace std;

long Sum(string s)
{
    long sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    return sum;
}

int main()
{
   long n,s1,c=0;
   cin>>n;
   vector<int>v;string s;char ch[101];
   for(int i=0;i<n;i++)
   {
       scanf("%100s", ch);
       s=ch;
       v.push_back(Sum(s));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<n;x++)
       {
           if((v[i]+v[x])%3==0&&v[i]!=0&&v[x]!=0&&i!=x)
           {
               v[x]=0;v[i]=0;c++;break;
           }
       }
   }
   cout<<c<<endl;
}
