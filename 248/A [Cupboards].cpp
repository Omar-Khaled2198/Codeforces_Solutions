#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,y,z1=0,o1=0,z2=0,o2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        x==1?o1++:z1++;
        y==1?o2++:z2++;
    }
    cout<<min(o1,z1)+min(o2,z2)<<endl;
}