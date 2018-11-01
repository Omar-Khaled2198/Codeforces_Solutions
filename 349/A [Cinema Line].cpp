#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int n25=0,n50=0,n100=0;bool c=false;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==25){n25++;c=true;}
        else
        {
            if(x==50)
            {
                if(n25>0)
                {
                    n25--;n50++;c=true;
                }
                else
                {
                    c=false;
                    break;
                }
            }
            else if(x==100)
            {
                if(n25>0&n50>0)
                {
                    n25--;n50--;c=true;
                }
                else if(n25>=3)
                {
                    n25-=3;c=true;
                }
                else
                {
                    c=false;break;
                }
            }
        }
    }
    if(c==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}