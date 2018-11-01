#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d;int c1=0,c2=0;
	cin>>a>>b>>c>>d;
	a=a.substr(2);
	b=b.substr(2);
	c=c.substr(2);
	d=d.substr(2);
	bool check=false;
	int vec[4]={a.size(),b.size(),c.size(),d.size()};
	char vec1[4]={'A','B','C','D'};
	vector<int>f;
	for(int i=0;i<4;i++)
	{
		for(int x=0;x<4;x++)
		{
			if(2*vec[i]<=vec[x]&&i!=x)c1++;
			if(vec[i]>=2*vec[x]&&i!=x)c2++;
		}
		if(c1==3)f.push_back(i);
		if(c2==3)f.push_back(i);
		c1=c2=0;
	}
	if(f.size()==1)cout<<vec1[f[0]]<<endl;
	else if(f.size()==0||f.size()>1)cout<<'C'<<endl;
}
