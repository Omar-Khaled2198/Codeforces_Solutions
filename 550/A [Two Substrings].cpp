#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
    vector<pair<int,int> >ab,ba;
   for(int i=0;i<s.size()-1;i++)
   {
       if(s[i]=='A'&&s[i+1]=='B')
       {
           ab.push_back(make_pair(i,i+1));
       }
       else if(s[i]=='B'&&s[i+1]=='A')
       {
            ba.push_back(make_pair(i,i+1));
       }
   }
   for(int i=0;i<ab.size();i++)
   {
       for(int x=0;x<ba.size();x++)
       {
           if(ab[i].first!=ba[x].first&&ab[i].second!=ba[x].second&&ab[i].first!=ba[x].second&&ab[i].second!=ba[x].first)
           {
               cout<<"YES"<<endl;
               return 0;
           }
       }
   }
    cout<<"NO"<<endl;

}