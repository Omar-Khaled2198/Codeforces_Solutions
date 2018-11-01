#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,sum=0,x,y,c1,c2=0;
    cin>>n>>k;
    sum=n*n;
    bool row[100001],col[100001];
    fill(row,row+100001,0);
    fill(col,col+100001,0);
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        if(row[x]==0&&col[y]==0){sum-=(2*n)-1-c1-c2;row[x]=col[y]=1;c1++;c2++;}
        else if(row[x]==1&&col[y]==0){sum-=n-c1;col[y]=1;c2++;}
        else if(row[x]==0&&col[y]==1){sum-=n-c2;row[x]=1;c1++;}
        cout<<sum<<endl;
        
    }
}