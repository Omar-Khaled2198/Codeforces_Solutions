#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,c=0;
    cin>>n;
    set<int>s;set<int>::iterator it;
    int arr[1001];
    fill(arr,arr+1001,0);
    for(int i=0;i<n;i++)
    {
        cin>>x;arr[x]++;s.insert(x);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        if(c<arr[*it])
        {
            c=arr[*it];
        }
    }
    cout<<c<<" "<<s.size()<<endl;
}