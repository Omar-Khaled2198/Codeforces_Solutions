#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t="",temp="";
    cin>>s;
    set<string>st;
    st.insert(s);
    for(int i=s.size()-1;i>=0;i--)
    {
        temp=s[i]+temp;
        t+=temp;
        for(int x=0;x<s.size()-temp.size();x++)
        {
            t+=s[x];
        }
        st.insert(t);
        t="";
    }
    cout<<st.size()<<endl;
}
