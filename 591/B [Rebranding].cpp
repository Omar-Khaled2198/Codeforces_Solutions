#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<char,char>mp;
    string s,temp,t;char x,y;
    cin>>s;
    temp=s;
    set<char>st;
    set<char>::iterator it;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }
    s="";
    for(it=st.begin();it!=st.end();it++)
    {
        s+=*it;
        mp.insert(pair<char,char>(*it,*it));
    }
    st.clear();t=s;
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        for(int l=0;l<s.size();l++)
        {
            if(s[l]==x)s[l]=y;
            else if(s[l]==y)s[l]=x;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        mp[t[i]]=s[i];
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<mp[temp[i]];
    }

}