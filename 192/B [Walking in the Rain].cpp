#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum=0,c=0;
   cin>>n;
   int b[n];
   vector<int>a;
   set<int>s;
   set<int>::iterator it;
   for(int i=0;i<n;i++){scanf("%d",&b[i]);s.insert(b[i]);}
   for(it=s.begin();it!=s.end();it++)a.push_back(*it);s.clear();
   sort(a.begin(),a.end());
   for(int i=0;i<a.size();i++)
   {
       sum+=a[i];
       for(int x=0;x<n;x++)
       {
           if(b[x]-a[i]<=0)b[x]=0;
           else b[x]-=a[i];
       }
       for(int x=0;x<a.size();x++)
       {
           if(i!=x)a[x]-=a[i];
       }
       if(b[0]==0||b[n-1]==0){cout<<sum<<endl;break;}
       for(int x=0;x<n;x++)
       {
           if(b[x]==0)c++;
           else {if(c>=2)break;else c=0;}
       }
       if(c>=2){cout<<sum<<endl;break;}
   }

}
