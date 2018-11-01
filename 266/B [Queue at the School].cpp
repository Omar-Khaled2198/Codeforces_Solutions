#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;string s;
    cin>>n>>k;
    cin>>s;
    for(int x=0;x<k;x++){
    for(int i=0;i<n;)
    {
        if(s[i]=='B'&&s[i+1]=='G'){
            swap(s[i],s[i+1]);i+=2;}
        else{i++;}

    }}
    cout<<s<<endl;
}
