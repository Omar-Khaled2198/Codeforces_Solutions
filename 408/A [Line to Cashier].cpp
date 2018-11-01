#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,it,sum=0;
	cin>>t;
	int k[t];
	vector<int>v;
	for(int i=0;i<t;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<t;i++)
    {
        sum=k[i]*15;
        for(int x=0;x<k[i];x++)
        {
            cin>>it;sum+=it*5;
        }
        v.push_back(sum);
    }
    cout<<*min_element(v.begin(),v.end());
}
