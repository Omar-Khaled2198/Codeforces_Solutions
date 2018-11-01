#include <bits/stdc++.h>

using namespace std;

int main()
{
   unsigned long long n,f;char c;
   cin>>n>>c;
   if(((n-1)/2)%2==0)f=(n/2)*6+(n-1);
   else {f=((n-2)/2)*6+(n-3);}
   string s="fedabc";
   for(int i=0;i<6;i++)if(c==s[i])cout<<f+i+1<<endl;
}

