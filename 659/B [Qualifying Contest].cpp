#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,reg,x,score;string s;
    cin>>n>>k;
    map<string,int>m;
    vector<pair<int,string> >v;
    vector<pair<int,string> >f;
    for(int i=0;i<n;i++)
    {
        cin>>s>>reg>>score;
        v.push_back(make_pair(reg,s));
        if(m.count(s)==0)
        {
            m.insert(pair<string,int>(s,score));
        }
    }
    sort(v.begin(),v.end());
    int MAX1=0,MAX2=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].first==v[i+1].first)
        {
            f.push_back(make_pair(m[v[i].second],v[i].second));
        }
        else
        {
            f.push_back(make_pair(m[v[i].second],v[i].second));
            sort(f.begin(),f.end());
            MAX1=f[f.size()-1].first;MAX2=f[f.size()-2].first;
            for(int l=f.size()-1;l>=0;l--)
            {
                if(MAX1==f[l].first)count++;
                else if(MAX2==f[l].first)count++;
                else break;
            }
            if(count>2)cout<<"?"<<endl;
            else cout<<f[f.size()-1].second<<" "<<f[f.size()-2].second<<endl;
            f.clear();count=0;
        }
    }


}