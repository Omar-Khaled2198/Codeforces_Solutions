#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[51][51]={0};
    int n,k,p,t,c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>p>>t;
        arr[p-1][t-1]++;
    }
    for(int i=50;i>=0;i--)
    {
        for(int x=0;x<=50;x++)
        {
            if(arr[i][x]!=0)
            {
                c+=arr[i][x];
                if(c>=k)
                {
                    cout<<arr[i][x];
                    break;
                }
            }
        }
        if(c>=k)break;
    }
}