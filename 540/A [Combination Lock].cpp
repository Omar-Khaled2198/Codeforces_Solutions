#include <bits/stdc++.h>

using namespace std;

int rotating(int n,int i)
{
    int c=0;
    while(n!=i)
    {
        if(n==9){n=0;c++;}
        else
        {
            n++;c++;
        }
    }
    return c;
}

int main()
{
   int n,x,y,count=0;string s1,s2;
   cin>>n;
   cin>>s1>>s2;
   for(int i=0;i<n;i++)
   {
       x=s1[i]-'0';y=s2[i]-'0';
       if(max(x,y)-min(x,y)<rotating(max(x,y),min(x,y)))
         count+=max(x,y)-min(x,y);
       else
        count+=rotating(max(x,y),min(x,y));
   }
   cout<<count<<endl;

}

