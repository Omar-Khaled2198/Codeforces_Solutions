#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    set<long>s;
    for(int i=1;i*i<=k;i++)
    {
    	if(k%i==0&&i<=n&&k/i<=n)
    	{
    		s.insert(k/i);
    		s.insert(i);
    	}
    }
    cout<<s.size()<<endl;
}
