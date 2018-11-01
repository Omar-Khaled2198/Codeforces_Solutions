#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x,y,count=0;
    cin>>n>>k;char ch;
    vector<pair<int,int>>b,s,ss;
    for(int i=0;i<n;i++)
    {
        cin>>ch>>x>>y;
        if(ch=='B')b.push_back(make_pair(x,y));
        else s.push_back(make_pair(x,y));
    }
    sort(b.rbegin(),b.rend());
    sort(s.begin(),s.end());
    s.push_back(make_pair(0,0));
    b.push_back(make_pair(0,0));
    for(int i=0;i<b.size()-1;i++)
    {
        if(b[i].first==b[i+1].first)
        {
            b[i+1].second+=b[i].second;
            b[i].first=0;b[i].second=0;
        }
    }
    for(int i=0;i<s.size()-1;i++)
    {

        if(s[i].first==s[i+1].first)
        {
            s[i+1].second+=s[i].second;
            s[i].first=0;s[i].second=0;
        }
    }
    for (int i = 0; i <s.size() ; i++)
    {
        if(count==k)break;
       if(s[i].first==0&&s[i].second==0)continue;
        else
       {
           ss.push_back(make_pair(s[i].first,s[i].second));
           count++;
       }

    }
    sort(ss.rbegin(),ss.rend());
    count=0;
    for(int i=0;i<ss.size();i++)
    {
        if(count==k)break;
        if(ss[i].first==0&&ss[i].second==0)continue;
        else {cout<<'S'<<" "<<ss[i].first<<" "<<ss[i].second<<endl;count++;}
    }
    count=0;
    for(int i=0;i<b.size();i++)
    {
        if(count==k)break;
        if(b[i].first==0&&b[i].second==0)continue;
        else
        {cout<<'B'<<" "<<b[i].first<<" "<<b[i].second<<endl;count++;}
    }

}