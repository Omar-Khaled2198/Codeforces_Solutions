#include <iostream>

using namespace std;

int main()
{
    int n,c=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(s[x]=='R')
            {
                if(s[x+1]=='.'&&s[x+2]!='L')s[x+1]='/';
            }
            else if(s[x]=='L')
            {
                if(s[x-1]=='.'&&s[x-2]!='R')s[x-1]='\\';
            }
        }
        for(int x=0;x<n;x++)
        {
            if(s[x]=='\\')s[x]='L';
            else if(s[x]=='/')s[x]='R';
        }
    }
    for(int i=0;i<n;i++)if(s[i]=='.')c++;
    cout<<c<<endl;
}
