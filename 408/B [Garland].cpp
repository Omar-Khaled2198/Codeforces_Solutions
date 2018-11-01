#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s1,s2;int c=0;
   int a[256];fill(a,a+256,0);
   cin>>s1>>s2;
   for(int i=0;i<s1.size();a[s1[i]]++,i++);
   for(int i=0;i<s2.size();i++){if(a[s2[i]]==0)c++;}
   if(c>0)cout<<-1<<endl;
   else
   {c=0;
   for(int i=0;i<s2.size();i++)
   {
       if(a[s2[i]]>0){c++;a[s2[i]]--;}
   }
    cout<<c<<endl;
   }
}
