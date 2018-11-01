#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;string s,t="";
    cin>>n>>s;bool c=false;
    int ch[256];
    fill(ch,ch+256,0);
    set<char>sett;
    set<char>::iterator it;
    for(int i=0;i<s.size();i++) {
        ch[s[i]]++;
        sett.insert(s[i]);
    }
    s="";
    for(it=sett.begin();it!=sett.end();it++){s+=*it;}sett.clear();
    for(int i=0;i<s.size();i++)
    {
        if(ch[s[i]]%n!=0)
        {
            c=false;break;
        }
        else
            c=true;
    }
    if(c==true)
    {
        for(int i=0;i<n;i++)
        {
            for(int x=0;x<s.size();x++)
            {
                for(int l=0;l<ch[s[x]]/n;l++)
                {
                    t+=s[x];
                }
            }
        }
        cout<<t<<endl;
    }
    else
        cout<<-1<<endl;

}