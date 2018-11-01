#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,c=0,count=0;
    cin>>n;
    int a[1001];
    fill(a,a+1001,0);
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;a[x]++;
    }
    while(true)
        {
            if(count==1001)break;
            count=0;
            for(int i=0;i<1001;i++)
            {

                if(a[i]>0){v.push_back(i);a[i]--;}
                else count++;
            }
    }
    for(int i=0;i<v.size()-1;i++)if(v[i]<v[i+1])c++;
    cout<<c<<endl;

}
