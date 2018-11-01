#include <bits/stdc++.h>

using namespace std;

int main()
{
     string s;
     cin>>s;
     int c=0;
     for(int i=0;i<s.size();i++)
     {
    	 if(s[i]=='0'){s[i]='x';c++;break;}
     }
     if(c==0)
    	 for(int i=0;i<s.size()-1;i++)cout<<s[i];
     else
    	 for(int i=0;i<s.size();i++)if(s[i]!='x')cout<<s[i];
}
