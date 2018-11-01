#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    char s[n];string t="YGBO";
    s[0]='R';s[1]='O';s[n-1]='V';s[n-2]='I';
    for(int i=2;i<n-2;i++)
    {
         s[i]=t[c];
         c++;
         if(c==4)c=0;
    }
    for(int i=0;i<n;i++)cout<<s[i];
}
