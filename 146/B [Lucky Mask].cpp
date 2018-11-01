#include <bits/stdc++.h>

using namespace std;

string get(int a)
{
    stringstream st;
    st<<a;
    string str=st.str();
    string s="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='7')s+="7";
        else if(str[i]=='4')s+="4";
    }
    return s;
}

int main()
{
   int a;string s,t;
    cin>>a>>s;a++;
    while(true)
    {
        t=get(a);
        if(t==s){cout<<a<<endl;return 0;}
        a++;
    }
}