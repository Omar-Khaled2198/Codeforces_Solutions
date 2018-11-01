#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n=0,t;
	bool check=false;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		vec.push_back(t);
	}
	for(int i=0;i<vec.size();i++)
	{
		for(int x=0;x<vec.size();x++)
		{
		    for(int l=0;l<vec.size();l++)
		    {
		    	if(vec[i]+vec[x]==vec[l]&&i!=x)
		    	{
		    		t=l;cout<<t+1<<" "<<x+1<<" "<<i+1<<endl;
		    		check=true;break;
		    	}
		    }
		    if(check==true)break;
		}
		if(check==true)break;
	}
	if(check==false)cout<<-1<<endl;
}
