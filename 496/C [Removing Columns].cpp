#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,pos=0,c=0;string s;
    cin>>n>>m;bool ch=false;
	vector<string>v;vector<int>k;
	for(int i=0;i<n;i++)
	{
		cin>>s;v.push_back(s);
	}
	for(int i=0;i<m;i++)
	{
		for(int x=0;x<v.size()-1;x++)
		{
			if(v[x].compare(v[x+1])==1)
			{
				for(int l=0;l<v[x].size();l++)
				{
					if(v[x][l]-'0'>v[x+1][l]-'0')
					{
					    pos=l;ch=true;break;
					}
				}
			}
			if(ch==true)break;
		}
		if(ch==true){c++;for(int i=0;i<v.size();i++)v[i][pos]=' ';}
		ch=false;
	}
	cout<<c<<endl;
}


