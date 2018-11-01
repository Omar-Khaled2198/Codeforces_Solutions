#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c,x,y;
    int w[3];
    fill(w,w+3,0);
    for(int i=0;i<3;i++)
    {
        cin>>x>>c>>y;
        if(c=='>')
        {
            if(x=='A')w[0]++;
            else if(x=='B')w[1]++;
            else w[2]++;
        }
        else
        {
            if(y=='A')w[0]++;
            else if(y=='B')w[1]++;
            else w[2]++;
        }
    }
    if(w[0]==w[1]||w[1]==w[2]||w[0]==w[2])cout<<"Impossible"<<endl;
    else
    {
        if(w[0]==0)cout<<'A';
        else if(w[1]==0)cout<<'B';
        else cout<<'C';
        if(w[0]==1)cout<<'A';
        else if(w[1]==1)cout<<'B';
        else cout<<'C';
        if(w[0]==2)cout<<'A';
        else if(w[1]==2)cout<<'B';
        else cout<<'C';
    }
}
