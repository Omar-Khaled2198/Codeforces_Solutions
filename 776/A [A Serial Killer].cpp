#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s1,s2;int n;
    pair<string,string>p;
    vector<pair<string,string> >v;
    cin>>s1>>s2>>n;
    p.first=s1;p.second=s2;
    v.push_back(make_pair(s1,s2));
    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        if(p.first==s1)p.first=s2;
        if(p.second==s1)p.second=s2;
        v.push_back(p);
    }
    for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<'\n';
}
