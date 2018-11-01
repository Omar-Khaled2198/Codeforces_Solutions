#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,t=0;
    cin>>n;
    long long g=1,x;
    vector<long long>v;
    set<long long>st;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.insert(x);
        if(t<st.size())
        {           
            t=st.size();
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<=2){cout<<"YES"<<endl; return 0;}
    if(v.size()==3)
    {
        if(v[1]-v[0]==v[2]-v[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}