#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int x=0;x<n-i;x++)cout<<" "<<" ";
        for(int l=0;l<=i;l++){if(i!=0)cout<<l<<" ";else cout<<l;}
        for(int l=i-1;l>=0;l--){if(l!=0)cout<<l<<" ";else cout<<l;}
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int x=0;x<n-i;x++)cout<<" "<<" ";
        for(int l=0;l<=i;l++){if(i!=0)cout<<l<<" "; else cout<<l;}
        for(int l=i-1;l>=0;l--){if(l!=0)cout<<l<<" ";else cout<<l;}
        cout<<endl;
    }

}