#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	    cin>>x;
	    string s;
	    for(int i=0; i<x; i++)
	    {
	        cin>>s;
	        if(s.size()>10)
	        	            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
	        	        else
	        	            cout<<s<<endl;
	    }
}

