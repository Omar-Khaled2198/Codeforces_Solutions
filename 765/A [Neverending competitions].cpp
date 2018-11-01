#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;string s1,s2,s3;
    cin>>n;
    vector<pair<string,string>>v;
    cin>>s3;
    for(int i=0;i<n;i++)
    {
        cin>>s3;
        s1=s3.substr(0,3);
        s2=s3.substr(5,3);
        v.push_back(make_pair(s1,s2));
    }
    for(int i=0;i<v.size();i++)
    {
        for(int x=0;x<v.size();x++)
        {
            if(v[i].first==v[x].second&&v[i].second==v[x].first&&v[i].first!="")
            {
                count+=2;
                v[i].first=v[i].second=v[x].first=v[x].second="";break;
            }
        }
    }
    if(count==n)cout<<"home"<<endl;
    else cout<<"contest"<<endl;
}