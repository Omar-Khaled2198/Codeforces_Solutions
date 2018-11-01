#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int occ=0,inv=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==-1)
        {
            occ++;
            if(inv>0)
            {
                occ--;inv--;
            }
        }
        else inv+=x;
    }
    cout<<occ<<endl;
}