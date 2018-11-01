#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   a/=1;b/=2;c/=4;
   cout<<min(a,min(b,c))*7<<endl;
}


