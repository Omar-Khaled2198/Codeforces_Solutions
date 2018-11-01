#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,s=-1,g=-1,c=1001;
    cin>>n>>m;
    set<int>st;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            cin>>a[i][x];
            if(a[i][x]=='S')s=x;
            else if(a[i][x]=='G')g=x;
        }
        c=min(c,s-g);
        if(s-g>0)st.insert(s-g);
    }
    if(c<0)cout<<-1<<endl;
    else cout<<st.size()<<endl;

}
