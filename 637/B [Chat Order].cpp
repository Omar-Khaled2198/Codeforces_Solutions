#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;string s;
   cin>>n;
   map<string,int>m1;
   map<int,string>m2;
   map<string,int>::iterator it;
   map<int,string>::reverse_iterator it2;
   for(int i=0;i<n;i++)
   {
       cin>>s;
       m1.insert(pair<string,int>(s,i));
       m1[s]=i;
   }
   for(it=m1.begin();it!=m1.end();it++)m2.insert(pair<int,string>(it->second,it->first));
   for(it2=m2.rbegin();it2!=m2.rend();it2++)cout<<it2->second<<endl;
}
