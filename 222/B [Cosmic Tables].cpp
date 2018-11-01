#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,q,x,y,count1=0,count2=0;char ch;
    cin>>n>>m>>q;
    int a[n][m];
    vector<int>r,c;
    for(int i=0;i<n;i++)
    {
        for(x=0;x<m;x++)
        {
            c.push_back(count2);
            cin>>a[i][x];count2++;
        }
        r.push_back(count1);
        count1++;
    }
    for(int i=0;i<q;i++)
    {
        cin>>ch>>x>>y;
        x--;y--;
        if(ch=='r'){swap(r[x],r[y]);}
        else if(ch=='c'){swap(c[x],c[y]);}
        else if(ch=='g')
        {
            cout<<a[r[x]][c[y]]<<endl;
        }
    }

}