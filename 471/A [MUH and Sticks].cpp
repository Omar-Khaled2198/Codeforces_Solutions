#include <bits/stdc++.h>

using namespace std;

int main()
{
    short x,l=0;
    vector<short> v;
    for(int i=0;i<6;i++)
    {
    	cin>>x;
    	v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-3;i++)
    {
    	if(v[i]==v[i+1]&&v[i+1]==v[i+2]&&v[i+2]==v[i+3])
    	{
    		l=4;
    		v[i]=v[i+1]=v[i+2]=v[i+3]=0;
    		break;
    	}
    }
    if(l==0)
    	cout<<"Alien"<<endl;
    else
    {
    	sort(v.rbegin(),v.rend());
    	if(v[0]==v[1])
    		cout<<"Elephant"<<endl;
    	else
    		cout<<"Bear"<<endl;
    }
}
