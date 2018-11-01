#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(i==x)
            {
                arr[i][x]=k;
            }
            else
            {
                arr[i][x]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            cout<<arr[i][x]<<" ";
        }
        cout<<endl;
    }
}
