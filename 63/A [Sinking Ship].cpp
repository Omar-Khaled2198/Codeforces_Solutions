#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
     int t;string x,y;
     vector<string>n,s,f;
     cin>>t;
     for(int i=0;i<t;i++)
     {
    	 cin>>x;n.push_back(x);
    	 cin>>y;s.push_back(y);
     }
     for(int i=0;i<t;i++){if(s[i]=="rat"){f.push_back(n[i]);s[i]="";}}
     for(int i=0;i<t;i++){if(s[i]=="child"||s[i]=="woman"){f.push_back(n[i]);s[i]="";}}
     for(int i=0;i<t;i++){if(s[i]=="man"){f.push_back(n[i]);s[i]="";}}
     for(int i=0;i<t;i++){if(s[i]=="captain"){f.push_back(n[i]);s[i]="";}}
     for(int i=0;i<t;i++)cout<<f[i]<<endl;
}
